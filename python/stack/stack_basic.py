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
print(s.isEmpty())
s.push('1')
s.push('2')
s.push('3')
print(s.isEmpty())
print("after push "+s.peek())
s.pop()
print("after pop "+s.peek())
print("size "+str(s.size()))
