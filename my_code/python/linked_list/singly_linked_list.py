
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

a.next = b
b.next = c

# print(a.value)
# print(a.next.value)
# print(a.next.next.value)
print_list(a)
