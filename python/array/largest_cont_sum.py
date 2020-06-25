def largest_cont_sum(arr):
    if len(arr) == 0:
        return 0
    max_sum = curr_sum = arr[0]

    for num in arr[1:]:

        curr_sum = max(curr_sum + num, num)

        max_sum = max(curr_sum, max_sum)    #just for taking max

    return max_sum


print(largest_cont_sum([1, 2, -1, 3, 4, 10, 10, -10, -1]))
