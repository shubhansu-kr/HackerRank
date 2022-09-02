n = int(input())


if n % 2:
    print('Weird')
else: 
    if n > 1 and n < 6: 
        print('Not Weird')
    elif n > 5 and n < 21: 
        print('Weird')
    else: 
        print('Not Weird')

