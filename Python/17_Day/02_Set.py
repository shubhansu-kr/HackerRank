n = int(input())
s = set(map(int, input().split()))

x = int(input())

for _ in range(x): 
    operation = input().split()

    if (operation[0] == 'pop'): 
        s.pop()
    elif (operation[0] == 'remove'): 
        s.remove(int(operation[1])) 
    else: 
        s.discard(int(operation[1]))

sum = 0
for i in s: 
    sum += i

print(sum)