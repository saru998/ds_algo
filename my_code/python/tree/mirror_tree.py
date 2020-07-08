class binary_tree(object):
    def __init__(self, data):
        self.data = data
        self.left = None
        self.right = None


def print_inorder(root):
    if root:
        print_inorder(root.left)
        print(root.data)
        print_inorder(root.right)

b = binary_tree(1)
b.left = binary_tree(3)
b.right = binary_tree(2)
b.right.left = binary_tree(5)
b.right.right = binary_tree(4)

def print_mirror(node):
    if node.left is None and node.right is None:
        return node
    else:
        temp = node.left
        node.left = print_mirror(node.right)
        node.right = print_mirror(temp)
    return node

print_inorder(print_mirror(b))
