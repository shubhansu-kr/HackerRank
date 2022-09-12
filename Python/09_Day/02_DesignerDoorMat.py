# https://www.hackerrank.com/contests/k21gp9/challenges/designer-door-mat

N, M = map(int, input().split())

for i in range(N): 
    st = '---'
    if (i == N//2):
        ct = (N-3)//2
        # for i in range(0, ct): 
        #     print(st, end='')
        # print('-WELCOME-', end = '')
        # for i in range(0, ct): 
        #     print(st, end='')
        # print() 
        print(f'{st * ct}-WELCOME-{st * ct}')
    else:
        bt = '.|.'
        ct = abs(N//2 - i)
        # for i in range(ct): 
        #     print(st, end='')
        # for i in range(N - ct*2): 
        #     print(bt, end= '')
        # for i in range(ct): 
        #     print(st, end='')
        # print()
        print(f'{st * ct}{bt * (N-ct*2)}{st * ct}') 
