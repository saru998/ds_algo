class Node: 
      def __init__(self, key): 
        self.key = key  
        self.left = None
        self.right = None

def inorder(root): 
    if root is not None: 
        inorder(root.left) 
        print(root.key), 
        inorder(root.right) 

def insert( node, key):   
    if node is None:
        return Node(key)
    if key < node.key: 
        node.left = insert(node.left, key)
    else: 
        node.right = insert(node.right, key) 
    return node
  
def delete_node(node, key): 
    if node is None: 
        return node  
    if key < node.key: 
        node.left = delete_node(node.left, key) 
    elif(key > node.key): 
        node.right = delete_node(node.right, key) 
    else: 
        if node.left is None : 
            temp = node.right  
            node = None 
            return temp  
              
        elif node.right is None : 
            temp = node.left  
            node = None
            return temp 
  
        # Node with two children: Get the inorder successor .smallest in the right subtree) 
        temp = successor(node.right) 
        # Copy the inorder successor's content to this node 
        node.key = temp.key 
        # Delete the inorder successor 
        node.right = delete_node(node.right , temp.key)
    return node  
    
def successor(node): 
    current = node 
    while(current.left is not None): 
        current = current.left  
    return current  

root = None
root = insert(root, 50) 
root = insert(root, 30) 
root = insert(root, 20) 
root = insert(root, 40) 
root = insert(root, 70) 
root = insert(root, 60) 
root = insert(root, 80) 
  
# print("Inorder traversal of the given tree")
# inorder(root) 
  
# print("\nDelete 20")
# root = delete_node(root, 20) 
# print("Inorder traversal of the modified tree")
# inorder(root) 
  
# print("\nDelete 30")
# root = delete_node(root, 30) 
# print("Inorder traversal of the modified tree")
# inorder(root) 
  
print("\nDelete 50")
root = delete_node(root, 50) 
print("Inorder traversal of the modified tree")
inorder(root) 


""" Let us create following BST
              50 
           /     \ 
          30      70 
         /  \    /  \ 
       20   40  60   80
  
Complexity
insert,search,delete o(height) """
