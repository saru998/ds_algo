
class Node(object):
    def __init__(self,value):
        self.value = value
        self.next = None

a = Node(1)
b = Node(2)
c = Node(3)
d = Node(4)
e = Node(5)
f = Node(6)

a.next = b
b.next = c
c.next = d
d.next = e
e.next = f

f.next = d

def cycle_check(node):
    ptr1 = node
    ptr2 = node

    while ptr2!= None:
        # print(ptr1.value)
        # print(ptr2.value)

        ptr1 = ptr1.next
        ptr2 = ptr2.next.next

        if(ptr1 == ptr2):
            return True
    return False

print(cycle_check(a))

