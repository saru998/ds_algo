class Node: 
      def __init__(self, key): 
        self.key = key  
        self.left = None
        self.right = None

def inorder(root): 
    if root is not None: 
        inorder(root.left) 
        print(root.key)
        inorder(root.right) 

def insert( node, key):   
    if node is None:
        return Node(key)
    if key < node.key: 
        node.left = insert(node.left, key) 
    else: 
        node.right = insert(node.right, key) 
    return node
  
def trim_binary_search_tree(node,min,max):
    if node is not None:
        if node.key > min and node.key < max:
            node.left = trim_binary_search_tree(node.left,min,max)
            node.right = trim_binary_search_tree(node.right,min,max)
            return node
        else:
            return None
    else:
        return node

root = None
root = insert(root, 50) 
root = insert(root, 30) 
root = insert(root, 20) 
root = insert(root, 40) 
root = insert(root, 70) 
root = insert(root, 60) 
root = insert(root, 80) 
  
inorder(root)
print('triming')
trim_binary_search_tree(root,40,70)
inorder(root)

"""           50 
           /     \ 
          30      70 
         /  \    /  \ 
       20   40  60   80"""

    
