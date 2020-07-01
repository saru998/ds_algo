def positive_odd_negative_even(arr):
    i=0
    j=1

    arr2=[0]*len(arr)
    for x in range(len(arr)):
        
        if arr[x]<0:
            arr2[j] = arr[x]
            j+=2
        else:
            arr2[i] = arr[x]
            i+=2

    print(arr2)

positive_odd_negative_even([-1, 3, -5, 6, 3, 6, -7, -4, -9, 10])
