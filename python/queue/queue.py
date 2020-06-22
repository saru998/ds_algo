class Queue(object):
    def __init__(self):
        self.items=[]
    def isEmpty(self):
        return self.items==[]
    def size(self):
        return len(self.items)
    def enqeue(self,item):
        return self.items.insert(0,item)
    def dequeue(self):
        return self.items.pop()

q=Queue()
print(q.isEmpty())
q.enqeue(1)
q.enqeue(2)
q.enqeue(3)
print(q.size())
print(q.dequeue())
print(q.size())
