import re
n, m = map(int,input().split())
ar = [''] * (n*m)
for i in range(n):
    line = input()
    for j in range(m):
        ar[i+(j*n)]=line[j]
sub = ''.join(ar)
ans = re.sub(r'(?<=[A-Za-z0-9])([ !@#$%&]+)(?=[A-Za-z0-9])',' ',sub)
print(ans)