T = int(input())

while(T): 
    T = T-1
    n = int(input())
    size = n
    holiday = []
    while(n): 
        n = n-1
        x = int(input())
        holiday.insert(x)

    count = 16 + size 

    for i in holiday: 
        if (i % 7 == 0): 
            count = count - 1
        if (i+1)%7 == 0: 
            count = count-1

    print(count)

        
            