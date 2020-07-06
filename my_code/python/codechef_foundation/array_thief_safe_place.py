test_case = int(input())
for _ in range(test_case):
    [cop_house,h,m] = map(int,input().split())
    cop_house_list = list(map(int,input().split()))
    
    limit = h*m
    safe=set()
    for x in range(1,101):
        safe.add(x)
    
    for x in cop_house_list:
        i=limit+1
        temp=x
        temp2=x
        while i>0 and len(safe)>0:
            i -=1
            if temp > 0 and temp in safe:
                safe.remove(temp)
            if temp2 <= 100 and temp2 in safe:
                safe.remove(temp2)
            temp -=1
            temp2 +=1
            
    print(len(safe))
    #print(safe)
        
            
    
                



    

