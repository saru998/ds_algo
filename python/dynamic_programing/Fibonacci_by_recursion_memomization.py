n=10
cache = [None]*(n+1)
def nth_fibonacii(n):
    if n==0 or n==1:
        return n 
    if cache[n] != None:
        return cache[n]

    cache[n] = nth_fibonacii(n-1)+nth_fibonacii(n-2)

    return cache[n]

print(nth_fibonacii(n))

# 0 ,1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144
