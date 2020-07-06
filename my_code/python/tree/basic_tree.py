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


a = binary_tree('5')
a.insert_left('4')
a.insert_left('1')
a.insert_right('3')

print(a.get_data())
print(a.left.get_data())
print(a.left.left.get_data())