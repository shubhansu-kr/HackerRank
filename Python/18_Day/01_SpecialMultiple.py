import os
import sys

# Complete the solve function below.
def solve(n):
    i = 1
    while(True):
        x = int(bin(i)[2:])*9
        if(x%n == 0):
            return str(x)
        else:
            i+=1
            continue

if __name__ == '_main_':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    x = int(input())

    for t_itr in range(x):
        n = int(input())

        result = solve(n)

        fptr.write(result + '\n')

    fptr.close()