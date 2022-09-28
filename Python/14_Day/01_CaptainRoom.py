room = {}
n = int(input())
numbers = list(map(int, input().split()))

for i in numbers: 
    if (room.get(i)): 
        room[i] = room[i]  + 1
    else:
        room[i] = 1

for i in room.keys(): 
    if (room[i] == 1): 
        print(i)
        break