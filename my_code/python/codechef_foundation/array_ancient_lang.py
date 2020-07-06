t = int(input())
for _ in range(t):
    [w,p] = map(int,input().split())
    wo = tuple(input().split())
    
    ph = []
    for x in range(p):
        ph.extend(input().split())
    
    r=""
    for y in wo:
        if y in ph:
            r+="YES "
        else:
            r+="NO "
    print(r)
            

