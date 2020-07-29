def rain_water_trap(arr):
    max_right = 0
    max_right_array = [0 for x in range(len(arr))]

    for y in range(len(arr)-1, -1, -1):
        if arr[y] > max_right:
            max_right = arr[y]
        max_right_array[y] = max_right

    max_left = 0
    rain_water = 0
    temp = 0

    for x in range(len(arr)):
        temp = min(max_right_array[x], max_left)
        rain_water += max(temp-arr[x], 0)

        if arr[x] > max_left:
            max_left = arr[x]
    
    return rain_water
    #print(rain_water)


arr = [0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1]
rain_water_trap(arr)
