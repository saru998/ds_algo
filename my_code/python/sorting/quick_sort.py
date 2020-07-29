def partition(arr, start, end):
    i = start-1  # if oth ele needed to swap i shud be -1,then i will inc later become 0
    pivot = arr[end]
    for x in range(start, end):
        if arr[x] < pivot:
            i += 1  # because we need to return i of swap happned not i after swap
            arr[x], arr[i] = arr[i], arr[x]

    arr[i+1], arr[end] = arr[end], arr[i+1] #to swap pivot element also
    return i+1  # swapped position of i


def quicksort(arr, start, end):
    if start < end:
        p = partition(arr, start, end)
        quicksort(arr, start, p-1)  # pivot left ele
        quicksort(arr, p+1, end)  # pivot right ele


arr = [14, 8, 12, 6, 4, 9, 13]
quicksort(arr, 0, len(arr)-1)
print(arr)
