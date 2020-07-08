class binary_tree(object):
    def __init__(self, data):
        self.data = data
        self.left = None
        self.right = None


root = binary_tree(1)
root.left = binary_tree(2)
root.right = binary_tree(3)
root.left.left = binary_tree(7)
root.left.right = binary_tree(6)
root.right.left = binary_tree(5)
root.right.right = binary_tree(4)


def get_height(root):
    if root == None:
        return 0
    else:
        l_count = 1+get_height(root.left)
        r_count = 1+get_height(root.left)
    return max(l_count, r_count)


def print_spiral(root):
    h = get_height(root)

    direction = True
    for x in range(h):
        print_spiral_util(root,x,direction)
        direction = not direction

def print_spiral_util(node,level,direction):
    if level < 1 :
        print(node.data)
        return

    else:
        if direction:
            print_spiral_util(node.left,level-1,direction)
            print_spiral_util(node.right,level-1,direction)
        else:
            print_spiral_util(node.right,level-1,direction)
            print_spiral_util(node.left,level-1,direction)

print_spiral(root)
