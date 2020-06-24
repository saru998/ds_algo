def anagram(str1,str2):
    str1 = str1.replace(' ','')
    str2 = str2.replace(' ','')

    if len(str1)!=len(str2) :
        return False
    count = {}

    for s in str1 :
        if s in count :
            count[s] += 1
        else:
            count[s] = 1
    for s in str2 :
        if s in count :
            count[s] -= 1
        else:
            count[s] = 1
    #print(count)
    for x in count:
        if count[x]>0:
            return False

    return True
if anagram('clint eastwood','old west action') :
    print('yes it is anagram')
else:
    print('it is not anagram')
