def array_left_rotation(arr, k):

    arr2 = [0]*len(arr)
    n = len(arr)

    i = 0
    j = 0
    while(j < n):

        arr2[i] = arr[(i+k) % n]
        i += 1
        j += 1

    print(arr2)


def array_right_rotation(arr, k):

    arr2 = [0]*len(arr)
    n = len(arr)

    i = n-k
    j = 0
    while(j < n):

        arr2[(i+k) % n] = arr[i]
        i += 1
        j += 1

        if(i == n):
            i = 0

    print(arr2)


k = 2
array_left_rotation([1, 2, 3, 4, 5], 2)
array_right_rotation([1, 2, 3, 4, 5], 2)


# def array_left_rotation_2(arr, k):

#     arr2 = [0]*len(arr)

#     for x in range(len(arr)):
#         if x < k:
#             arr2[len(arr)-k+x] = arr[x]
#         else:
#             arr2[x-k] = arr[x]

#     print(arr2)
