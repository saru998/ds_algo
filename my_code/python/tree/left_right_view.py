class binary_node(object):
    def __init__(self, value):
        self.data = value
        self.left = None
        self.right = None
def print_inorder(node):
    if node:
        print_inorder(node.left) 
        print(node.data,end=" ")
        print_inorder(node.right) 
def print_left_view(node,level,max_level=[0]):
    if node is None:
        return
    else:
        if max_level[0] < level:
            max_level[0] = level
            print(node.data)
        print_left_view(node.left,level+1,max_level)
        print_left_view(node.right,level+1,max_level)
        
def print_right_view(node,level,max_level=[0]):
    if node is None:
        return
    else:
        if max_level[0] < level:
            max_level[0] = level
            print(node.data)
        print_left_view(node.right,level+1,max_level)
        print_left_view(node.left,level+1,max_level)

b = binary_node(20)
b.left = binary_node(8)
b.right = binary_node(22)
b.right.right = binary_node(25)
b.left.left = binary_node(5)
b.left.right = binary_node(3)
b.left.right.left = binary_node(10)
b.left.right.right = binary_node(14)

print_left_view(b,1)


