def minimum_distance(arr,x,y):
    
    min_value = 9999999
    i=-1
    for j in range(len(arr)):
        if arr[j] == x or arr[j] == y:
            if i!=-1 and arr[i]!=arr[j]:
                if abs(i-j) < min_value:
                    min_value = min(abs(i-j),min_value)
            i=j
    
    print(min_value)
minimum_distance([3, 5, 4, 2, 6, 5, 6, 6, 5, 4, 8, 3],3,6)
