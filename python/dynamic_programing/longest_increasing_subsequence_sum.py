def longest_increasing_subsequence_sum(arr):
    
    arr_sum=[]
    for x in range(len(arr)):
        arr_sum.append(arr[x])

    for x in range(len(arr)):
        for y in range(0, x):
            if arr[y] < arr[x] and arr_sum[x] < arr_sum[y]+ arr[x]:
                arr_sum[x] = arr_sum[y]+ arr[x]
      
    print("max_sum", max(arr_sum))


longest_increasing_subsequence_sum([1, 101, 2, 3, 100, 4, 5])

# output
# 106