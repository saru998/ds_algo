def coin_change_dp(target,coins,known_result):
    min_coins = target
    
    if target in coins:
        known_result[target] = 1
        return 1
    
    #dynamic saving case
    elif known_result[target] > 0:
        return known_result[target]

    else:
        for i in [ c for c in coins if c<target]:
            num_coins = 1 + coin_change_dp(target-i,coins,known_result)
            
            if num_coins < min_coins:
                min_coins = num_coins

                #dynamic saving case
                known_result[target] = min_coins

    return min_coins

target = 27
known_result = [0]*(target+1)

print(coin_change_dp(target,[1,5,10],known_result))

# 1 1 1 1 1
# 5 5 5 5
# 10 10
# 10 5 5
# 10 1 1 1 1