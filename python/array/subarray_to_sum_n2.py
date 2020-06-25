t = int(input())
for _ in range(t):
    [n, target] = map(int, input().split())
    arr = list(map(int, input().split()))

    curr_sum = arr[0]
    j = 1
    i = 0
    flag = True

    while j <= n:

        if curr_sum > target and i < j-1:
            while curr_sum > target:
                curr_sum -= arr[i]
                i += 1

        if curr_sum == target:
            print(str(i+1)+" "+str(j))
            flag = False
            break

        elif j < n:
            curr_sum += arr[j]
        j += 1

    if flag:
        print("-1")


# Input

# 2
# 5 12
# 1 2 3 7 5
# 10 15
# 1 2 3 4 5 6 7 8 9 10

# output
# 1 5
