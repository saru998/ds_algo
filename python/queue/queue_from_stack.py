class Queue_from_stack(object):
    def __init__(self):
        self.stack1=[]
        self.stack2=[]
    def enqeue(self,item):
        self.stack1.append(item)
    def deqeue(self):
        i=0
        while(i<len(self.stack1)):
            ele=self.stack1.pop()
            self.stack2.append(ele)
        
        return self.stack2.pop()

q=Queue_from_stack()
q.enqeue(1)
q.enqeue(2)
q.enqeue(3)
q.enqeue(4)
print(q.deqeue())
print(q.deqeue())
print(q.deqeue())
print(q.deqeue())


    


