def print_all_triplets(arr):
    arr.sort()

    i = 0
    k = len(arr)-1
    j = k-1

    while k > 1:
        if(i == j):
            i = 0
            k -= 1
            j = k-1

        elif (arr[i] + arr[j]) < arr[k]:
            i += 1
        elif (arr[i] + arr[j]) > arr[k]:
            j -= 1
        else:
            print(arr[i], arr[j], arr[k])
            k -= 1


arr = [5, 1, 7, 10,  2]
# 1, 2, 5, 7, 10,
print_all_triplets(arr)
