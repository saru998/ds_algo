t = int(input())
for m in range(t):
    x,y,k,n=map(int,input().split())

    if x<=y:
        print("LuckyChef")
    else:
        flag = False

        for o in range(n):
            p,c=map(int,input().split())

            if (abs(y-x) <= p) and (k >= c):
                flag = True
        if flag:
            print("LuckyChef")
        else:
            print("UnluckyChef")
