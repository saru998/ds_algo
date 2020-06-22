def longest_palindrome_n2(s):
    l = len(s)

    dp = [[0 for x in range(l)] for y in range(l)]

    # k = 0
    i = 0
    while(i < l-1):
        dp[i][i] = 1
        i += 1

    # k = 1
    i = 0
    while(i < l-1):
        if s[i] == s[i+1]:
            dp[i][i+1] = 1
        i += 1

    # k >= 3
    i = 0
    k = 3
    max_len = 2
    start = 0
    while k <= l:
        i = 0
        j = 0
        while j < l-k+1:
            j = i+k-1

            if s[i] == s[j] and (dp[i+1][j-1] == 1):
                dp[i][j] = 1
                if j>max_len:
                    start = i
                    max_len = j
            i += 1
        k += 1

    print(s[start:max_len])


s = "aaaabbaa"
print(longest_palindrome_n2(s))
