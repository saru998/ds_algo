def print_next_largest_number(arr):
	s=[]
	s.append(arr[0])

	j=1
	for x in range(j,len(arr)):
		if len(s)!=0 and arr[x] > s[-1]:
			ele = s.pop()
			print(ele,"->",arr[x])
		s.append(arr[x])
	while s:
		ele = s.pop()
		print(ele,"->",-1)

arr = [1,3,2,4]
print_next_largest_number(arr)