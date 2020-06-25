def subString(s, n): 
    for i in range(n): 
        for x in range(i+1,n+1): 
            print(s[i: x]); 
  
s = "abc"; 
subString(s,len(s))