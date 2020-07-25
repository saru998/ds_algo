def find_equlibrium(arr):
    i=0
    j=len(arr)-1

    left_sum=arr[i]
    right_sum=arr[j]

    while(i<=j):
        if left_sum < right_sum:
            left_sum+=arr[i]
            i+=1
        elif left_sum < right_sum:
            right_sum+=arr[j]
            j-=1
        elif left_sum == right_sum and i!=j:
            left_sum+=arr[i]
            right_sum+=arr[j]
            i+=1
            j-=1
        else:
            return i
    return -1


arr=[1 ,3 ,5 ,2 ,2]
print(find_equlibrium(arr))
