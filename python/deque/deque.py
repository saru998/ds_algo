class Deque(object):
    def __init__(self):
        self.items = []
    def isEmpty(self):
        return self.items == []
    def size(self):
        return len(self.items)
    def addFront(self,item):
        return self.items.append(item)
    def addRear(self,item):
        return self.items.insert(0,item)
    def removeFront(self):
        return self.items.pop()
    def removeRear(self):
        return self.items.pop(0)

d = Deque()
print(d.isEmpty())
d.addFront(1)
d.addRear(3)
print(d.size())
d.addFront(2)
print(d.removeRear())
print(d.removeFront())
print(d.removeFront())