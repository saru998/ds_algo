import math

def is_prime(n):
    for x in range(0,int(math.sqrt(n))):
        if x % n == 0:
            return True
    return False
print(is_prime(7))