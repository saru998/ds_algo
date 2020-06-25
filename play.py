class Node(object):
    def __init__(self,data):
        self.data = data
        self.left = None
        self.right=None

def pre_order(node):
    if node:
        print(node.data,end=' ')
        pre_order(node.left)
        pre_order(node.right)
    
    
a = Node(4)
a.left = Node(2)
a.right = Node(6)

a.left.left = Node(1)
a.left.right = Node(3)

a.right.left = Node(5)
a.right.right = Node(7)

pre_order(a)
