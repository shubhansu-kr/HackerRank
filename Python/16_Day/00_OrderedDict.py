N = int(input())

from collections import OrderedDict

map = OrderedDict()
for i in range(N):
    item, u, price = input().rpartition(' ')
    map[item] = map.get(item, 0) + int(price)
for item, price in map.items():
    print(item, price)