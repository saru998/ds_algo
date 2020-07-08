class node(object):
    def __init__(self, value):
        self.data = value
        self.next = None


n1 = node(3)
n1.next = node(6)
n1.next.next = node(9)

n2 = node(10)

n1.next.next.next = n2.next = node(15)

n2.next.next = node(30)

# printing list1
ptr = n1
while ptr:
    print(ptr.data, end=" ")
    ptr = ptr.next
print("")

# printing list2
ptr = n2
while ptr:
    print(ptr.data, end=" ")
    ptr = ptr.next
print("")

# Solution -----------------------------------------------

count_1 = 0
ptr = n1
while ptr:
    ptr = ptr.next
    count_1 += 1

count_2 = 0
ptr = n2
while ptr:
    ptr = ptr.next
    count_2 += 1

d = abs(count_2-count_1)  # diff

count = 0
ptr1 = n1
ptr2 = n2

if count_1 > count_2:
    while(count < d):
        count += 1
        ptr1 = ptr1.next
else:
    while(count < d):
        count += 1
        ptr2 = ptr2.next

while(ptr1 and ptr2):
    if ptr1.data ==  ptr2.data:
        print("intersection_pt",ptr1.data)
        break
    ptr1 = ptr1.next
    ptr2 = ptr2.next
