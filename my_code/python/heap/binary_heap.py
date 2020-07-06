class binary_heap(object):
    def __init__(self):
        self.heaplist = [0]
        self.size = 0

    def build_heap(self,alist):
        i = len(alist)//2
        self.size = len(alist)
        self.heaplist = [0] + alist
        while (i>0):
            self.shiftHeavyDown(i)
            i = i -1

    def shiftHeavyDown(self,i):
        while (i*2) <= self.size:
            mc_index = self.min_child(i)
            if self.heaplist[i] > self.heaplist[mc_index]:
                tmp = self.heaplist[i]
                self.heaplist[i] = self.heaplist[mc_index]
                self.heaplist[mc_index] = tmp
            i = mc_index

    def min_child(self,i):
        if i*2 + 1 > self.size:
            return i*2
        else:
            if self.heaplist[i*2] < self.heaplist[i*2+1]:
                return i*2
            else:
                return i*2+1

    def shiftLightUp(self,i):
        while i//2 > 0:
            if self.heaplist[i] < self.heaplist[i//2]:
                tmp = self.heaplist[i//2]
                self.heaplist[i//2] = self.heaplist[i]
                self.heaplist[i] = tmp
            i = i //2

    def insert(self,k):
        self.heaplist.append(k)
        self.size = self.size + 1
        self.shiftLightUp(self.size)

                
    def delMin(self):
        retval = self.heaplist[1]
        self.heaplist[1] = self.heaplist[self.size]
        self.size = self.size - 1
        self.heaplist.pop()
        self.shiftHeavyDown(1)
        return retval



a = binary_heap()
a.build_heap([9,5,2,8,3,1])
print(a.heaplist)
# print(a.delMin())
# print(a.insert(4))



# A Binary Heap is a Binary Tree with following properties.
# 1) It’s a complete tree (All levels are completely filled except possibly the last level and the last level has all keys as left as possible).
# This property of Binary Heap makes them suitable to be stored in an array.

# 2) A Binary Heap is either Min Heap or Max Heap. In a Min Binary Heap, the key at root must be minimum among all keys present in Binary Heap.
# The same property must be recursively true for all nodes in Binary Tree. Max Binary Heap is similar to MinHeap.

# Arr[(i-1)/2]	Returns the parent node
# Arr[(2*i)+1]	Returns the left child node
# Arr[(2*i)+2]	Returns the right child node

# insert,delete,extract_min = o(log n)
# extract min = o(1)