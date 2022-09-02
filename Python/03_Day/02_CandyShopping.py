t = int(input())

while(t): 
    t = t-1
    n, m = map(int, input().split())
    if (m >= n): 
        x = 0
    else: 
        x = n - m 
        if(x % 4): 
            x = x//4+1
        else: 
            x = x//4
    
    print (x)