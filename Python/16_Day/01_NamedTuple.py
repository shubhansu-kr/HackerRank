N, h, t = int(input()), list(input().split()), 0
for _ in range(N):
    t += int(list(input().split())[h.index('MARKS')])
print(t/N)
