test_case = int(input())
for _ in range(test_case):
    l = int(input())
    st = input()

    count = set()
    for x in range(l):
        for y in range(l):
            if int(st[x]) == 1 and int(st[y])== 1 and (x,y) not in count and (y,x) not in count:
                count.add((x,y))
    
    print(len(count))
        
            
    
                



    

