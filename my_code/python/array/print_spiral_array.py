def print_spiral_array(arr, m, n):

    i = 0
    j = 0

    while i < m and j < n:
        
        for x in range(j,n):
            print(arr[i][x],end=' ')
        i+=1

        for x in range(i,m):
            print(arr[x][n-1],end=' ')
        n-=1
        
        for x in range(n-1,j-1,-1):
            print(arr[m-1][x],end=' ')
        m-=1
        
        for x in range(m-1,i-1,-1):
            print(arr[x][j],end=' ')
        j+=1

arr = [
    [1, 2, 3, 4],
    [5, 6, 7, 8],
    [9, 10, 11, 12],
    [13, 14, 15, 16]
]

print_spiral_array(arr, 4, 4)

# output
# 1 2 3 4 8 12 16 15 14 13 9 5 6 7 11 10
