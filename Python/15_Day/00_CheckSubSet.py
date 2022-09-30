# https://www.hackerrank.com/contests/int213day15/challenges/py-check-subset

t = int(input())

for i in range(t): 
    input()
    a = set(map(int, input().split()))
    input()
    b = set(map(int, input().split()))
    if (a.issubset(b)): 
        print('True')
    else: 
        print('False')