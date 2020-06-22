t = int(input())
for _ in range(t):
    n = int(input())
    w = list(map(int,input().split()))
    
    count=0
    while(len(set(w))!=1):
        count+=1
        firstmaxindex = 0
        for y in range(len(w)):
            if w[y] == max(w):
                firstmaxindex = y
                break
        
        for x in range(len(w)):
            if x!=firstmaxindex:
                w[x]+=1
            
    print(count)


#fast way
t = int(input())
while t > 0:
    n = int(input())
    a = [int(x) for x in input().split()]
    print(sum(a)-n*min(a))  #sum of all - min(list) * n
    t-=1

