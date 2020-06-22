

[n,diff] = map(int,input().split())
pair=set()
chop=[]
for x in range(n):
    chop.append(int(input()))

for x in chop:
    for y in chop:
        if x!=y and abs(x-y)<=diff:
            if (x,y) not in pair and (y,x) not in pair:
                pair.add((x,y))
print(len(pair))


# 5 2
# 1
# 3
# 3
# 9
# 4