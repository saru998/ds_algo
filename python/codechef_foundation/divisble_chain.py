s = int(input())
to = int(input())
count=0

while s<=to:
    if to%s==0:
        count+=1
    s+=1
print(count)