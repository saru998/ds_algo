

def backtrack(a, o, i, j):

    if a[i] > a[j]:
        if o[i] <= o[j]:
            o[i] += 1
    elif a[i] < a[j]:
        if o[i] >= o[j]:
            o[j] += 1
    else:
        if o[i] > o[j]:
            o[j] = o[i]
        else:
            o[i] = o[j]
    if i-1 >= 0:
        if a[i-1] > a[j-1] and o[i-1] <= o[j-1]:
            
            backtrack(a, o, i-1, j-1)
            
        elif a[i-1] < a[j-1] and o[i-1] >= o[j-1]:
            
            backtrack(a, o, i-1, j-1)

    if j == len(a)-1:
        return
    else:
        backtrack(a, o, i+1, j+1)


a = [25, 46, 46, 96, 24, 10]

o = [0]*len(a)
backtrack(a, o, 0, 1)
print(o)
