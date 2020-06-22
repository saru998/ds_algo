test_case = int(input())
for _ in range(test_case):
    i = input()
    l = len(i)

    count = {}

    for x in range(l//2):
        if i[x] in count:
            count[i[x]] = count[i[x]]+1
        else:
            count[i[x]] = 1
    if l % 2 == 0:
        for x in range(l//2,l):
            if i[x] in count:
                count[i[x]] = count[i[x]]-1
            else:
                count[i[x]] = 1
    else:
        for x in range(l//2+1,l):
            if i[x] in count:
                count[i[x]] = count[i[x]]-1
            else:
                count[i[x]] = 1
    
    flag = True
    for x,y in count.items():
        if y != 0:
            flag = False
            break
    
    if flag :
        print("YES")
    else:
        print("NO")

    
            
    
                



    

