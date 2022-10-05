def minion_game(string):
    s = 0 
    k = 0 
    for i in range(len(string)): 
        c = string[i]
        if(c == 'A' or c == 'E' or c == 'I'): 
            k += (len(string)-i)
        elif(c == 'O' or c == 'U'): 
            k += (len(string)-i)
        else: 
            s += (len(string)-i)
    # your code goes here
    if (s > k): 
        print('Stuart', s)
    elif(s == k): 
        print('Draw')
    else: 
        print('Kevin', k)