from fractions import Fraction

b1 = ['r']*4 + ['b']*5
b2 = ['r']*3 + ['b']*7

combo = []
visited = 0

for i in b1:
    for e, j in enumerate(b2):
        for k in b2[e+1:]:
            temp = [i, j, k]
            if (temp.count('r') == 1) and (temp.count('b') == 2):
                combo.append(temp)
            
            visited += 1
            
print(Fraction(len(combo), visited))