def hcf(a,b):
    
    a1=set()
    b1=set()
    while(1):
        if a%2==0:
            a=a/2
            a1.add(2)
        elif a%3==0:
            a=a/3
            a1.add(3)
        elif a%5==0:
            a=a/5
            a1.add(5)
        else:
            a1.add(1)
            break
    while(1):
        if b%2==0:
            b=b/2
            b1.add(2)
        elif b%3==0:
            b=b/3
            b1.add(3)
        elif b%5==0:
            b=b/5
            b1.add(5)
        else:
            b1.add(1)
            break
    return b1 & a1
print(hcf(36,60))
