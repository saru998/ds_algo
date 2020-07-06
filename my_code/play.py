# Input
# 10 4 5 3 6

# Output
# -4 -1 5 4 10


class node(object):
    def __init__(self, value):
        self.data = None
        self.next = None

	def add_at_end(self, start, value):

		ptr = start
		while ptr.next:
			ptr = ptr.next

		ptr.next = new node(value)
