# https://www.hackerrank.com/contests/k21gp5/challenges/list-comprehensions

x = int(input())
y = int(input())
z = int(input())
n = int(input())

a = [i for i in range(0, x+1)]
b = [i for i in range(0, y+1)]
c = [i for i in range(0, z+1)]

ans = []

for x in a:
    for y in b:
        for z in c:
            if (x + y + z != n):
                ans.append([x, y, z])

print(ans)
