def tail_recursion(n,result=1):
    if n==0:
        return result
    else :
        return tail_recursion(n-1,n*result)
   
print(tail_recursion(5))
# it do all the multiplication in the end

