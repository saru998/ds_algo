def permute(a, x, l,out=[]): 
    if x==l: 
        return out.append(''.join(a))
    else: 
        for i in range(x,l): 
            a[x], a[i] = a[i], a[x] 
            permute(a, x+1, l,out) 
            a[x], a[i] = a[i], a[x]
    return out

string = "ABCD"

l = len(string) 
a = list(string) 
print(permute(a, 0, l))
