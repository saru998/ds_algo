# 2
# 3
# #..
# #..
# #..
# 3
# #.#
# #.#
# #.#

t=int(input())
for _ in range(t):
    n = int(input())
    
    sqaure=[]
    for x in range(n):
       a = list(input())
       sqaure.append(a)

    count=0
    for x in range(n):
        for y in range(n):
            
            flag=True

            for m in range(x,n):
                if sqaure[m][y] == '#':
                    flag=False
            
            for p in range(y,n):
                if sqaure[x][p] == '#':
                    flag=False

            if flag:
                count+=1
    print(count)

