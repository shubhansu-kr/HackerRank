from itertools import product
x = lambda x: [int(i) for i in x.strip().split()]
[print(i, end=' ') for i in tuple(product(x(input()), x(input())))]