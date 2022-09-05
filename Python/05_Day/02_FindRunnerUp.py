n = int(input())
score = map(int, input().split())

max1 = -1e9
max2 = -1e9

for i in score:
    if (i > max1): 
        max2 = max1
        max1 = i 
    if (i > max2 and i != max1): 
        max2 = i
        
print (max2) 