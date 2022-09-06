students = []
for _ in range(int(input())):
    name = input()
    score = float(input())
    students.append([name, score])

min1 = 1e9
min2 = 1e9

for i in students: 
    if (min1 > i[1]): 
        min2 = min1
        min1 = i[1]
    if (min2 > i[1] and i[1] != min1):
        min2 = i[1]; 

names = []

for i in students: 
    if (i[1] == min2): 
        names.append(i[0])

for i in range(len(names)): 
    for j in range(i+1, len(names)): 
        if (names[i] > names[j]): 
            temp = names[i]
            names[i] = names[j]
            names[j] = temp

for i in names: 
    print(i)

