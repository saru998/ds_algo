def missing_number(arr1):
    s=sum(arr1)
    l=len(arr1)

    last_ele = arr1[l-1]

    sum_array = (last_ele*last_ele + last_ele)/2

    return sum_array-s
    
print(missing_number([1,2,3,4,5,6,8,9,10]))