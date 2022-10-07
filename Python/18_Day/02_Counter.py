from collections import Counter
ns = int(input())
sh = Counter(map(int, input().split()))
nc = int(input())
sal = 0
for i in range(nc):
    size, price = map(int, input().split())
    if sh[size]: 
        sal += price
        sh[size] -= 1
print(sal)