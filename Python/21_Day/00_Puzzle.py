from fractions import Fraction

places = [v for v in range(0, 10, 1)]
total = 0
visited = []

for k, v in enumerate(places):
    for i in places[0:k] + places[k+1:]:
        if v == 0:
            if i == 9:
                visited.append([v, i])
            elif i == 1:
                visited.append([v, i])
        elif v == 9:
            if i == 0:
                visited.append([v, i])
            elif i == 8:
                visited.append([v, i])
        else:
            if (v == (i - 1)) or (v == (i + 1)):
                visited.append([v, i])

        total += 1

print(Fraction(len(visited), total))
