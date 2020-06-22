
def binary_search(arr,item,start,end):
    if start==end:
        return False

    mid = (start+end)//2

    if item < arr[mid]:
        return binary_search(arr,item,start,mid-1)
    elif item > arr[mid]:
        return binary_search(arr,item,mid+1,end)
    else:
        return True


arr=[9,3,7,2,4,6,1,12]
arr.sort()

print(binary_search(arr,12,0,len(arr)))
# sorted 1,2,3,4,6,7,9