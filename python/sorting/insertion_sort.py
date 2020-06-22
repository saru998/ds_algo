def insertion_sort(arr):
    l=len(arr)
    for x in range(1,l):
        
        key = arr[x]
        y=x-1

        while arr[y] > key and y>=0:
            arr[y+1] = arr[y]
            y=y-1
        
        arr[y+1] = key

    return arr

print(insertion_sort([11,2,6,3,9,4]))