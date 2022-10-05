def merge_the_tools(string, k):
    n = len(string)//k
    i = 0
    while(n):
        n -= 1
        uniq = set({})
        l = k
        sub = ''
        while(l): 
            l -= 1
            c = string[i]
            i += 1
            if c not in uniq: 
                uniq.add(c)
                sub += c 
        
        print(sub)