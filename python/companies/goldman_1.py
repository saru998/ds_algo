def findQualifiedNumbers(numberArray):
    result=[]
    for x in numberArray:
        y = list(map(int,str(x)))
        if 1 in y and 2 in y and 3 in y:
            result.append(int("".join(map(str, y))) )            
    
    result.sort()
    
    if len(result)>0:
        return ",".join(map(str,result))
    else:
        return -1
    
print(findQualifiedNumbers([123,1234]))
