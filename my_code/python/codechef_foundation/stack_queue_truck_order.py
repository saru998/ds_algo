
while(1):
    n = int(input())

    if(n == 0):
        break

    i = list(map(int,input().split()))

    # 5 1 2 4 3 6

    truck=[]
    blast = -1
    while(len(i)>0):
        if len(i)<=n:
            truck.append(i.pop())
        else:
            blast = i.pop()
    # 6 3 4 1 2 5
    final=[]
    temp=[]

    while(1):
        if len(truck)>0:
            item = truck.pop()
        
            if len(truck) == 0 and len(temp)==0:
                final.append(item)
                break

            if len(truck)>0 and item > truck[len(truck)-1]:
                if len(temp)>0 and item > temp[len(temp)-1]:
                    while(len(temp)>0 and item > temp[len(temp)-1]):
                            item2 = temp.pop()
                            final.append(item2)
                    temp.append(item)
                else:
                    temp.append(item)
            else:
                if len(final)==0 or len(temp) == 0:
                    final.append(item)
                elif len(temp)>0 and item < temp[len(temp)-1]:
                    if item > final[len(final)-1]:
                        final.append(item)
                    else:
                        break
                else:
                    while(item > temp[len(temp)-1]):
                        item2 = temp.pop()
                        final.append(item2)
                    final.append(item)
        else:
            while len(temp)>0:
                temp3 = temp.pop()
                final.append(temp3)
            break


    if len(final) == n:
        print("yes")
    else:
        print("no")
    
    if blast == 0:
        break