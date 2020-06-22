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
  
def printLevelOrder(root): 
    if root is None: 
        return
    
    queue = [] 
    queue.append(root) 
  
    while(len(queue) > 0): 
        print(queue[0].key) 
        node = queue.pop(0) # will remove from front
  
        if node.left is not None: 
            queue.append(node.left) # will be appended to rear/last
  
        if node.right is not None: 
            queue.append(node.right) # will be appended to rear/last

root = None
root = insert(root, 50) 
root = insert(root, 30) 
root = insert(root, 20) 
root = insert(root, 40) 
root = insert(root, 70) 
root = insert(root, 60) 
root = insert(root, 80) 
  
print("Inorder traversal of the given tree")
printLevelOrder(root) 
"""           50 
           /     \ 
          30      70 
         /  \    /  \ 
       20   40  60   80"""

    
