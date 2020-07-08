# Input
# 10 4 5 3 6

# Output
# -4 -1 5 4 10

class node(object):
    def __init__(self, value):
        self.data = value
        self.next = None

class linked_list(object):
    def __init__(self):
        self.start = None
        self.size = 0

    def add(self, value):
        if self.start:
            ptr = self.start
            while ptr.next:
                ptr = ptr.next
            ptr.next = node(value)
        else:
            self.start = node(value)
    def print(self):
        ptr = self.start
        while ptr.next:
            print(ptr.data,"->",end="")
            ptr = ptr.next
        print(ptr.data)

l = linked_list()
l.add(10)
l.add(4)
l.add(5)
l.add(6)
l.print()
