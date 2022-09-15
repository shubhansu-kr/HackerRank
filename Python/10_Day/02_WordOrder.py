n = int(input())
uniq = set({})
freq = {}
for i in range(n): 
    x = input()
    uniq.add(x)
    if (freq.get(x)):
        freq[x] += 1
    else: 
        freq[x] = 1

print(len(uniq))
for i in freq.values(): 
    print(i, end=' ')