
def fast_exponential_mul(base,n):
    if n % 2 == 0 :
        return (base**2)**(n/2)
    else:
        return base*(base**2)**((n-1)/2)

print(fast_exponential_mul(3,10))

print(3**10)
