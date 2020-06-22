def selection_sort(arr):
    l=len(arr)
    for x in range(0,l):
        for y in range(x+1,l):  # y shud always start by +1 then x a[0] should be compared to a[1] not by a[0]

            if arr[x] > arr[y]:
                temp = arr[y]
                arr[y]=arr[x]
                arr[x]=temp
    return arr

print(selection_sort([11,2,6,3,9,4]))