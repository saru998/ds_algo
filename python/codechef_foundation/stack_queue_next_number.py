test_case = int(input())
for _ in range(test_case):
    l = int(input())
    num_list = list(map(int,input().split()))
    old_ele = int("".join(map(str, num_list))) 

    old_list = num_list
    new_list = []

    i=1
    while(1):
        j=i
        while(j>0):
            item = old_list.pop()
            new_list.append(item)
            j -=1
        
        j=i
        while(j>0):
            item = new_list.pop(0)
            old_list.append(item)
            j -=1
        i+=1
        
        next_ele = int("".join(map(str, old_list))) 

        if(next_ele > old_ele):
            break

    print(next_ele)
    

    
        
            
    
                



    

