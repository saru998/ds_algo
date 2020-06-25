def decimal_to_binary(num): 
    if num > 1: 
        return str(num % 2) + decimal_to_binary(num // 2) 
    return str(num % 2)


# for x in range(1,11):
#     print(x,decimal_to_binary(x))

# print("single-----")
# print(decimal_to_binary(5))

print(decimal_to_binary(5))
