import re
pattern = r"\#[A-Fa-f0-9]{6}|(?!^)\#[A-Fa-f0-9]{3}"
for _ in range(int(input())):
    m = re.findall(pattern, input())
    if m: print(*m, sep='\n')