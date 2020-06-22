
#itrative dp
def lcs_itrative(X , Y): 
    # find the length of the strings 
    m = len(X) 
    n = len(Y) 
  
    # declaring the array for storing the dp values 
    L = [[None]*(n+1) for i in range(m+1)] 
  
    """Following steps build L[m+1][n+1] in bottom up fashion 
    Note: L[i][j] contains length of LCS of X[0..i-1] 
    and Y[0..j-1]"""
    for i in range(m+1): 
        for j in range(n+1): 
            if i == 0 or j == 0 : 
                L[i][j] = 0
            elif X[i-1] == Y[j-1]: 
                L[i][j] = L[i-1][j-1]+1
            else: 
                L[i][j] = max(L[i-1][j] , L[i][j-1]) 
  
    # L[m][n] contains the length of LCS of X[0..n-1] & Y[0..m-1] 
    return L[m][n] 
#end of function lcs

lcs_itrative("AGGTAB","GXTXAYB")



#Recursive dp
# def common_subsequence(x,y):
    
#     m = len(x)
#     n = len(y)
    
#     if m==0 or n==0:
#         return 0
        
#     if x[-1] == y[-1]:
#         return 1+ common_subsequence(x[:-1],y[:-1])
#     else:
#         return max(common_subsequence(x[:-1],y),common_subsequence(x,y[:-1]))

# print(common_subsequence("AGGTAB","GXTXAYB"))

