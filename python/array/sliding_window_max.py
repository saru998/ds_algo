def sliding_window_max(arr, k):

    n = len(arr)

    i = 0
    reset = 0
    j = k-1
    max_value = -1

    while j < n:
        if arr[i] > max_value:
            max_value = arr[i]
        
        if i==j and j<n:
            i=reset+1
            j+=1
            
            print(max_value)
            if j<n:
                max_value = arr[i]
        i+=1

sliding_window_max([1, 2, 3, 4, 5, 6, 7, 8, 9, 10], 3)
