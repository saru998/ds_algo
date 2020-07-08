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


def build_binary_tree_from_level_and_inorder(i, levelorder, inorder):

    if len(inorder) == 1:
        return binary_tree(inorder[0])

    while i < len(levelorder):
        if levelorder[i] in inorder:
            index = inorder.index(levelorder[i])
            
            node = binary_tree(inorder[index])
            node.left = build_binary_tree_from_level_and_inorder(i+1, levelorder, inorder[:index])
            node.right = build_binary_tree_from_level_and_inorder(i+1, levelorder, inorder[index+1:])
            break
        else:
            i += 1

    return node


levelorder = [20, 8, 22, 4, 12, 10, 14]
inorder = [4, 8, 10, 12, 14, 20, 22]
result = build_binary_tree_from_level_and_inorder(0, levelorder, inorder)
print_inorder(result)
