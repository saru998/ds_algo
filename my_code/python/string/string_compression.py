def string_compression(temp):
    
    result=""

    i=0
    while(i<len(temp)):

        key=temp[i]
        j=i+1
        count=1
        result+=str(key)

        while(1):
            if j<len(temp) and temp[j]!= key:
                result+=str(count)
                i=j
                break
            elif j<len(temp) :
                j+=1
                count+=1
            else:
                result+=str(count)
                i=j
                break
    return result

print(string_compression("aAAAaaBBBCCCCCC"))
#ouput a1A3a2B3C6
