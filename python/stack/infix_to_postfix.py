test_case = int(input())
for _ in range(test_case):
    exp = list(input())

    output=""
    temp = [] 
    i=0
    while(i<len(exp)):
        
        if exp[i] == '(':
            temp.append(exp[i])
        elif exp[i] == ')':
            while(temp[-1]!='('):
                output +=temp.pop()
            temp.pop()
        elif exp[i] == '+' or exp[i] == '-':
            while(len(temp)>0 and 
                (temp[-1]=='+' or temp[-1]=='-' or temp[-1]=='*' or temp[-1]=='/' or temp[-1]=='^')):
                output +=temp.pop()
            temp.append(exp[i])
        elif exp[i] == '*' or exp[i] == '/':
            while(temp[-1]=='*' or temp[-1]=='/' or temp[-1]=='^'):
                output +=temp.pop()
            temp.append(exp[i])
        elif exp[i] == '^':
            while(temp[-1]=='^'):
                output +=temp.pop()
            temp.append(exp[i])
        else:
            output +=exp[i]
        i+=1
    print(output)

# input
# a+b*(c^d-e)^(f+g*h)-i

# output
# abcd^e-fgh*+^*+i-
    
    
    
                



    

