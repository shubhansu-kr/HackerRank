list1 = [12, 32, 44, 33, 56, 77, 87, 22, 11, 32]

print(len(list1))
ind = int(input()) 

if (ind < 1 or ind > 10): 
    print('Not a valid Index')
else: 
    print(list1[ind])