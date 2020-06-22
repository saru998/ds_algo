def reverse(ss):
    if len(ss)==0 :
        return ''
    return ss[-1:]+reverse(ss[0:-1])

print(reverse('123456789'))
