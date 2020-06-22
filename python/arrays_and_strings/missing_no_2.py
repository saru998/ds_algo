# Python3 program to Find missing  
# integers in list 
          
def find_missing(lst): 
    return [x for x in range(lst[0], lst[-1]+1) 
                            if x not in lst] 
  
# Driver code 
lst = [1, 2, 4, 6, 7, 9, 10] 
print(find_missing(lst)) 