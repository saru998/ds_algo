def longest_increasing_subsequence_length(arr):
    occur = [1]*len(arr)

    for x in range(len(arr)):
    
        for y in range(0, x):
            if arr[y] < arr[x] and occur[x] < occur[y]+1:
                occur[x] = occur[y]+1
      
    print("max_length", max(occur))


longest_increasing_subsequence_length([1, 101, 2, 3, 100, 4, 5])
