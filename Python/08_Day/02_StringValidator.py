# https://www.hackerrank.com/contests/k21gp8/challenges/string-validators

t = input()

for s in t:
    if (s.isalnum()): 
        print('True')
        break
else:
    print('False')
for s in t:
    if (s.isalpha()): 
        print('True')
        break
else:
    print('False')
for s in t:
    if (s.isdigit()): 
        print('True')
        break
else:
    print('False')
for s in t:
    if (s.islower()): 
        print('True')
        break
else:
    print('False')
for s in t:
    if (s.isupper()): 
        print('True')
        break
else:
    print('False')
