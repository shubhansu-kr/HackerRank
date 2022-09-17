# import defaultdic 

from collections import defaultdict

n, m = map(int, input().split())
A = list(map(str, input().split()))
B = list(map(str, input().split()))

d = defaultdict(list)

for i in range(len(A)): 
    d[A[i]].append(i+1)

for i in B: 
    print(*d[input()] or [-1])

# n,m = list(map(int,input().split()))
# d = defaultdict(list)
# for i in range(n):
#     d[input()].append(i+1)
# for i in range(m):
#     print(*d[input()] or [-1])
    