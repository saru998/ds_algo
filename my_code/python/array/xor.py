def XOR(x,y):
    return x ^ y

def XOR2(x,y):
    return ((x | y) - (x & y))


# XOR is basically if binary bit is same then 0 if diff then 1

print(XOR(3,5))
print(XOR2(3,5))
