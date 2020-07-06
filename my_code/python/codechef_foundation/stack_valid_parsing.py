test_case = int(input())
for _ in range(test_case):
    #<><<>><<<>>><> 
    st = list(input())
    
    temp = []
    count = 0
    max_count=0
    i=0
    while(i<len(st)):
        if st[i] == "<":
            temp.append(st[i])
            count=0
        elif st[i] == ">" and len(temp)>0:
            temp.pop()
            count+=2
        if count>max_count:
            max_count=count
        i+=1
    if max_count>0:
        print(max_count)
    else:
        print("0")




    

