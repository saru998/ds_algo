def nth_fibonacii(n):
    if n==0 :
        return 0 
    if n==1 :
        return 1
    return nth_fibonacii(n-1)+nth_fibonacii(n-2)
print(nth_fibonacii(30))

# 0 ,1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144
