def merge_sort(arr):
    if len(arr)==1:
        return arr

    mid = len(arr)//2    

    left = merge_sort(arr[:mid])
    right = merge_sort(arr[mid:])

    result=[]
    i=j=k=0

    while i<len(left) or j<len(right):
        if i<len(left) and j<len(right):
            if left[i]<right[j]:
                result.append(left[i])
                i+=1

            elif left[i]>right[j]:
                result.append(right[j])
                j+=1

        elif i<len(left):
            result.append(left[i])
            i+=1

        elif j<len(right):
            result.append(right[j])
            j+=1

    return result

print(merge_sort([2,13,5,9,7,10]))
#len 6-1 5//2 = 2
