t = int(input())

while(t): 
    t = t-1 
    n = int(input())
    p = int(input())

    if(n >= 1200): 
        x = (n*p)*9/10
    else: 
        x = n*p
    
    print(x)