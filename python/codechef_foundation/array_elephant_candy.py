test_cases = input() 
for x in range(int(test_cases)):
    c = int(input().split(" ")[1])
    d = input().split(" ")

    numbers = [ int(x) for x in d ]

    if sum(numbers) == c :
        print("Yes")
    else:
        print("No")
