def coin_change(target,coins):
    min_coins = target
    if target in coins:
        return 1
    else:
        for i in [ c for c in coins if c<target]:
            num_coins = 1 + coin_change(target-i,coins)
            
            if num_coins < min_coins:
                min_coins = num_coins

    return min_coins
    
print(coin_change(27,[1,5,10]))

# 1 1 1 1 1
# 5 5 5 5
# 10 10
# 10 5 5
# 10 1 1 1 1