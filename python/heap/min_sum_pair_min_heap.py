from queue import PriorityQueue 
  
# function to display first K  
# maximum sum combinations 
def KMaxCombinations( A, B, N, K): 
      
    # max heap. 
    pq = PriorityQueue()  
      
    # insert all the possible   
    # combinations in max heap. 
    for i in range(0, N): 
        for j in range(0, N): 
           a = A[i] + B[j]  
           pq.put((a, (A[i],B[j])))      #CHANGE minus to plus if need min priority queue or min heap
              
    # pop first N elements from  
    # max heap and display them. 
    
    count = 0
    while (count < K): 
        print(pq.get()[1]) 
        count = count + 1
          
# Driver method 
A = [ 1,3,11] 
B = [ 2,4,8] 
N = len(A) 
K = 4
KMaxCombinations(A, B, N, K) 