class Node(object):
    def __init__(self,value):
        self.value = value
        self.next = None
def print_list(node):
    ptr = node
    while ptr:
        print(ptr.value)
        ptr=ptr.next
def add_ele_at_last(node,item):
    if not node:
        node = Node(item)
    else:
        ptr = node
        while ptr.next:
            ptr=ptr.next
        ptr.next =  Node(item)

    return node

def reverse_by_group(node,k):
    curr = node
    prev = None
    next = None
    count = 0

    while curr and count < k:
        next = curr.next
        curr.next = prev

        prev = curr
        curr = next

        count+=1
    
    if next:
        node.next = reverse_by_group(next,k)

    return prev

t = int(input())
for _ in range(t):
    n = int(input())
    arr = input().split()
    k = int(input())

    start = add_ele_at_last(None,arr[0])

    for x in range(1,len(arr)):
        add_ele_at_last(start,arr[x])

    new = reverse_by_group(start,k)
    print("--------------")
    print_list(new)

