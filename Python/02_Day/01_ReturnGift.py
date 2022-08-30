n = int (input())

while (n): 
    a, b = map(int, input().split())
    ans = a % b 
    if (ans == 0): 
        print(1)
    else: 
        print(ans)
    n = n - 1