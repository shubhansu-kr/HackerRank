from fractions import Fraction

pipe1 = ['r']*4 + ['b']*3
pipe2 = ['r']*5 + ['b']*4
pipe3 = ['r']*4 + ['b']*4

c = []
visited = 0

for i in pipe1:
    for j in pipe2:
        for k in pipe3:
            temp = [i, j, k]
            count_r = temp.count('r')
            count_b = temp.count('b')
            if (count_r==2) and (count_b==1):
                c.append(temp)
                
            visited += 1

print(Fraction(len(c), visited))