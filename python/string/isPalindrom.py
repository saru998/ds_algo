def isPalindrom(str):
  for x in range(0,len(str)//2):
    if(str[x]!=str[len(str)-1-x]):
      print("not a palindrom")
      return
  print("Its a palindrom")

isPalindrom("abac")
