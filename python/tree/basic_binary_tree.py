class binary_tree(object):
    def __init__(self,data):
        self.data = data
        self.left = None
        self.right = None
    
    def insert_left(self,data):
        if self.left == None:
            self.left = binary_tree(data)
        else:
            temp = binary_tree(data)
            temp.left = self.left
            self.left = temp
    
    def insert_right(self,data):
        if self.right == None:
            self.right = binary_tree(data)
        else:
            temp = binary_tree(data)
            temp.right = self.right
            self.right = temp
    
    def get_right(self):
        return self.right

    def get_left(self):
        return self.left

    def get_data(self):
        return self.data
#NLR
def preorder(tree):
    if tree:
        print(tree.data)
        preorder(tree.left)
        preorder(tree.right)
#LNR
def inorder(tree):
    if tree:
        inorder(tree.left)
        print(tree.data)
        inorder(tree.right)
#LRN
def postorder(tree):
    if tree:
        postorder(tree.left)
        postorder(tree.right)
        print(tree.data)


a = binary_tree('4')
a.insert_left('2')
a.insert_right('6')

a1 = a.get_left()
a1.insert_left('1')
a1.insert_right('3')

b1 = a.get_right()
b1.insert_left('5')
b1.insert_right('7')

print("preorder")
preorder(a)

print("inorder")
inorder(a)

print("postorder")
postorder(a)
