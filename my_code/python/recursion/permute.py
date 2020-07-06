def permute(s):
    out = []
    if len(s) == 1:
        out = [s]
    else:
        for i,v in enumerate(s):
            for perm in permute(s[:i]+s[i+1:]):
                out+=[v+perm]
    return out
print(len(permute('abc')))
