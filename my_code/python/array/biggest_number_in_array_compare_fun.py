def compare_num(x, y):
    a = str(x)+str(y)
    b = str(y)+str(x)
    if (int(a) < int(b)):
        return True
    else:
        return False


def single_largest_number_from_array(arr):
    for x in range(len(arr)):
        for y in range(x+1, len(arr)):
            if(compare_num(arr[x], arr[y])):
                arr[x], arr[y] = arr[y], arr[x]
    return arr


t = input()
for _ in range(int(t)):
    n = input()
    arr = list(map(int, input().split(' ')))

    print(single_largest_number_from_array(arr))

# Input
# 1
# 5
# 1 0 3 4 5

# output
# [5, 4, 3, 1, 0]
