def swap_case(s):
    newStr = ""
    for i in range(len(s)): 
        if(s[i] >= 'A' and s[i] <= 'Z'):
            newStr += s[i].lower()
        elif(s[i] >= 'a' and s[i] <= 'z'): 
            newStr += s[i].upper()
        else: 
            newStr += s[i]
    return newStr