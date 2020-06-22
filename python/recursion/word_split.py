def word_split(s,arr,output=None):
    if output is None:
        output=[]

    for a in arr:
        if s.startswith(a):
            output.append(a)
            return word_split(s[len(a):],arr,output)
    return output

print(word_split('themanran',['the','ran','man']))
