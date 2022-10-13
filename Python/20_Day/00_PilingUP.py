from collections import deque
def solve(deck):
    while deck:
        big = deck.popleft() if deck[0]>deck[-1] else deck.pop()
        if not deck:
            return "Yes"
        if deck[-1]>big or deck[0]>big:
            return "No"
    
for i in range(int(input())):
    int(input())
    deck = deque(map(int,input().split()))
    print(solve(deck))