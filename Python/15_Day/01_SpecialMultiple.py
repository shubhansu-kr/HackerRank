# https://www.hackerrank.com/contests/int213day15/challenges/special-multiple

#!/bin/python3

import math
import os
from queue import Queue
import random
import re
import sys

#
# Complete the 'solve' function below.
#
# The function is expected to return n STRING.
# The function accepts INTEGER n as parameter.
#

def f():
    vals = [9]
    yield 9
    while True:
        newVals = []
        for v in vals:
            for tail in (0,9):
                nextV = v * 10 + tail
                yield nextV
                newVals.append(nextV)
        vals = newVals

def solve(n):
    print(n)
    for v in f():
        if v % n == 0:
            return str(v)


if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    t = int(input().strip())

    for t_itr in range(t):
        n = int(input().strip())

        result = solve(n)

        fptr.write(result + '\n')

    fptr.close()
