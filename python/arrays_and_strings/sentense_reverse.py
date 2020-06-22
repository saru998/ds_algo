def sentense_reversal(str):
    str = str.strip()
    str_list = str.split(" ")
    str_list= reversed(str_list)

    print(" ".join(str_list))
    
print(sentense_reversal("   this is the word   "))
