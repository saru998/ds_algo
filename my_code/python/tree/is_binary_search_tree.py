class Node: 
      def __init__(self, key): 
        self.key = key  
        self.left = None
        self.right = None
        
def insert( node, key):   
    if node is None:
        return Node(key)
    if key < node.key: 
        node.left = insert(node.left, key) 
    else: 
        node.right = insert(node.right, key) 
    return node

def is_bst(node):
    if node is None or (node.left is None and node.right is None):
        return True
    else:
        if (node.left is not None and node.right is not None):
            if node.left.key < node.key and node.right.key > node.key:
                return True
            else:
                return False
        if node.left is None:
            if node.key < node.right.key:
                return is_bst(node.right)
            else:
                return False
        if node.right is None:
            if node.key > node.left.key:
                return is_bst(node.left)
            else:
                return False


root = None
root = insert(root, 50) 
root = insert(root, 30) 
root = insert(root, 20) 
root = insert(root, 40)
root = insert(root, 70) 
root = insert(root, 60) 
root = insert(root, 80)
print(is_bst(root))



root2 = None
root2 = insert(root2, 50) 
root2.left = Node(30)
root2.right = Node(33)
print(is_bst(root2))

