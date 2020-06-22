class Stack(object):
    def __init__(self):
        self.items = []
    def isEmpty(self):
        return self.items == []
    def push(self,item):
        return self.items.append(item)
    def pop(self):
        return self.items.pop()
    def size(self):
        return len(self.items)
    def peek(self):
        return self.items[len(self.items)-1]

s=Stack()

def balance_bracket(eq):
    for a in eq:
        if(a=='[' or a==']' or a=='(' or a==')'):
            if a==')' or a==']':
                if s.size()==0:
                    return False
                else:
                    s.pop()
            else:
                s.push(a)
    return s.size()==0
    
print(balance_bracket('[x-y+(x+u)*v]'))