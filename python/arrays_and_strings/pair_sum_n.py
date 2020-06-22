def sum_pair(arr, result):
    seen = set()
    output = set()
    
    for num in arr:
        target = result-num
        if target not in seen:
            seen.add(num)
        else:
            output.add((min(num,target),max(num,target)))
    print(output)

    
sum_pair([1, 3, 2, 2], 4)
