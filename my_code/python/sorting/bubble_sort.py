def bubble_sort(arr):
    l=len(arr)
    for x in range(0,l):
        for y in range(0,l-x-1):    #you are going to compare with y on array index will alwways = len-1 thats why on y loop -1 
            
            if arr[y] > arr[y+1]:
                temp = arr[y]
                arr[y]=arr[y+1]
                arr[y+1]=temp
    return arr

print(bubble_sort([11,2,6,3,9,4]))