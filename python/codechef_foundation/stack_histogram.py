def max_area_histogram(histogram):
    stack = list()
    max_area = 0
    right_index = 0
    area=0
    
    #[2,1,4,5,1,3,3]
    while right_index<len(histogram):
        if len(stack) == 0 or histogram[right_index] >= histogram[stack[-1]]:
            stack.append(right_index)
            right_index +=1

        else:
            top_index = stack.pop()
            if stack:
                width = right_index - stack[-1] - 1
                area = histogram[top_index] * width
            else:
                area = histogram[top_index] * right_index
            max_area = max(area,max_area)
    while stack:
        top_index = stack.pop()
        if stack:
            width = right_index - stack[-1] - 1
            area = histogram[top_index] * width
        else:
            area = histogram[top_index] * right_index
        max_area = max(area,max_area)
    return max_area

while 1:
    n = list(map(int,input().split()))
    if n[0] == 0:
        break
    hist = n[1:]
    print(max_area_histogram(hist))
    
# 1) Create an empty stack.
# 2) Start from first bar, and do following for every bar ‘hist[i]’ where ‘i’ varies from 0 to n-1.
# ……a) If stack is empty or hist[i] is higher than the bar at top of stack, then push ‘i’ to stack.
# ……b) If this bar is smaller than the top of stack, then keep removing the top of stack while top of the stack is greater. Let the removed bar be hist[tp]. Calculate area of rectangle with hist[tp] as smallest bar. For hist[tp], the ‘left index’ is previous (previous to tp) item in stack and ‘right index’ is ‘i’ (current index).
# 3) If the stack is not empty, then one by one remove all bars from stack and do step 2.b for every removed bar.

# Following is implementation of the above algorithm.