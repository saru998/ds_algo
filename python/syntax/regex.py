import re

#return if specific word present
txt = "The rain in Spain Spainish 01 "
x = re.search(r"\bSpai\w+", txt)
print(x.string)
print(x.group())
print(x.span())
print("------------")


#return if digits 
x = re.search(r"\d+", txt)
print(x.string)
print(x.group())
print(x.span())
print("------------")


#Return all occurance
txt = "The rain in Spain"
x = re.findall("ai", txt)
print(x)
print("------------")







# \b	Returns a match where the specified characters are at the beginning or at the end of a word
# \d	Returns a match where the string contains digits (numbers from 0-9)
# \s	Returns a match where the string contains a white space character
# \w	Returns a match where the string contains any word characters (characters from a to Z, digits from 0-9, and the underscore _ character)