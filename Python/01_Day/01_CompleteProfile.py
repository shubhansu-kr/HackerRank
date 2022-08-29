t = int(input())
while (t):
    cost = 50
    h = int(input())
    if (h > 10):
        h = h - 10
        cost = cost + h * 10
    print(cost)
    t = t-1
