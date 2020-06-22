
class DoubleNode(object):
    def __init__(self,value):
        self.value = value
        self.next = None
        self.prev = None

a = DoubleNode(1)
b = DoubleNode(2)
c = DoubleNode(3)

a.next = b
b.prev = a

b.next = c
c.prev = b

print(a.value)
print(a.next.value)
print(a.next.next.value)

print(c.value)
print(c.prev.value)
print(c.prev.prev.value)