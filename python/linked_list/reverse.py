
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

def reverse(node):
    currNode = node
    prevNode = None
    nextNode = None

    while currNode:
        nextNode = currNode.next
        currNode.next = prevNode
        
        prevNode = currNode
        currNode = nextNode
    
    return prevNode

print_list(a)
reverse(a)
print('reveresing')
print_list(j)
    


