def missing_number(arr1,arr2):
    arr1.sort()
    arr2.sort()
    
    len1 = len(arr1)
    len2 = len(arr2)
    
    for a in range(0,max(len1,len2)):
         if arr1[a] != arr2[a] :
            print(min(arr1[a],arr2[a]))
        

missing_number([1,6,3,4,2],[1,2,5,3,4])