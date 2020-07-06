n = int(input())
for _ in range(n):
    p = int(input())
    i=1
    menu=[]
    while i<=12:
        if 2**(i-1) > p:
            break
        else:
            menu.append(2**(i-1))
        i+=1
    
    count=0
    diff=p
    while menu:
        item = menu.pop()
        if diff % item == 0:
            print(count+(diff//item))
            break
        elif diff > item:
            diff = diff - item
            count+=1
        else:
            pass
        
        

# 4
# 10
# 256
# 255
# 4096