def largest_common_substring(s1, s2, m, n):
    dp = [[0 for x in range(n+1)] for y in range(m+1)]

    max_length = 0
    for x in range(m+1):
        for y in range(n+1):
            if x == 0 or y == 0:
                dp[x][y] = 0
            elif s1[x-1] == s2[y-1]:
                dp[x][y] = dp[x-1][y-1] + 1
                if dp[x][y] > max_length:
                    max_length = max(max_length, dp[x][y])
                    end = x
                    start = x - max_length
            else:
                dp[x][y] = 0
    print(s1[start:end])


largest_common_substring('mxabcy', 'nabck', 6, 5)
