import math
def evaluate_postfix(exp):
    s=[]
    for x in range(len(exp)):
        if exp[x] == "*":
            a=s.pop()
            b=s.pop()
            s.append(int(b)*int(a))
        elif exp[x] == "/":
            a=s.pop()
            b=s.pop()
            s.append(int(b)/int(a))
        elif exp[x] == "-":
            a=s.pop()
            b=s.pop()
            s.append(int(b)-int(a))
        elif exp[x] == "+":
            a=s.pop()
            b=s.pop()
            s.append(int(b)+int(a))
        elif exp[x] == "^":
            a=s.pop()
            b=s.pop()
            s.append(int(b)^int(a))
        else:
            s.append(exp[x])
    print(math.floor(s[0]))

exp = "231*+9-"
evaluate_postfix(exp)
