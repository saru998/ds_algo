t = int(input())
for _ in range(t):
    n = int(input())

    l = input().split()  

    w = "".join(l)

    if n >= 13 and set(l) == {'1','2','3','4','5','6','7'}:
        flag = True
        for x in range(len(w)//2):            
            if(w[x] != w[len(w)-1-x]):
                print("no")
                flag = False
                break

        if int(w[len(w)//2]) > 7:
            print("no")
            flag = False

        if flag:
            print("yes")
    else:
        print("no")