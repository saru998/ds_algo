
class Node(object):
    def __init__(self,value):
        self.value = value
        self.next = None
def print_list(node):
        ptr = node
        while ptr:
            print(ptr.value)
            ptr=ptr.next

a = Node(1)
b = Node(2)
c = Node(3)
d = Node(4)
e = Node(5)
f = Node(6)
g = Node(7)
h = Node(8)
i = Node(9)
j = Node(10)

a.next = b
b.next = c
c.next = d
d.next = e
e.next = f
f.next = g
g.next = h
h.next = i
i.next = j

def nth_from_last(n,node):
    ptr1 = node
    ptr2 = node
    for i in range(0,n):
        ptr1=ptr1.next
    while ptr1.next:
        ptr2=ptr2.next
        ptr1=ptr1.next
    return ptr2.value

print(nth_from_last(4,a))