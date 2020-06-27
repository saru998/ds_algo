class binary_heap(object):
    def __init__(self):
        self.size = 0
        self.heaplist = []

    def build_heap(self, arr):

        self.size = len(arr)
        i = self.size//2
        self.heaplist = [0]+arr
        while i > 0:
            self.shift_heavy_down(i)
            i -= 1
        print(self.heaplist)

    def shift_heavy_down(self, i):
        while i*2 <= self.size:
            min_child_index = self.min_child_index(i)
            if self.heaplist[i] > self.heaplist[min_child_index]:
                # swap
                self.heaplist[i], self.heaplist[min_child_index] = self.heaplist[min_child_index], self.heaplist[i]
            i = min_child_index

    def min_child_index(self, i):
        if i*2+1 > self.size:
            return i*2
        if self.heaplist[i*2] < self.heaplist[i*2+1]:
            return i*2
        else:
            return i*2+1
            
    def get_min(self):
        min_value = self.heaplist[1]
        self.heaplist[1] = self.heaplist[self.size]
        self.size-=1
        self.heaplist.pop()
        self.shift_heavy_down(1)

        return min_value

arr = [9,5,2,8,3,1]
bh = binary_heap()
bh.build_heap(arr)      #o(n)

k=2
for x in range(2):      #o(klogn)
    print(bh.get_min())

# total complexity n+klogn