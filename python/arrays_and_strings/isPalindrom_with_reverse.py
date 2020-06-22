def isPalindrom_with_reverse(str):
  result = list(str)
  result.reverse()
  reverse="".join(result)
  if(str==reverse):
    print("its a palindrome")
  else:
    print("its not a palindome")
isPalindrom_with_reverse("abbac")
