def is_unique(temp):
    seen = set()

    for a in temp:
        if a in seen :
            return False
        else:
            seen.add(a)
    return True
    

print(is_unique("ancdeer"))
#ouput False
