from itertools import groupby

for a, b in groupby(input()): 
    k= int(a)
    count = len(list(b))
    print((count,k),end=" ")