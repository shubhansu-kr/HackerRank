#!/bin/python3

import math
import os
import random
import re
import sys

#
# Complete the 'solve' function below.
#
# The function is expected to return a STRING_ARRAY.
# The function accepts following parameters:
#  1. INTEGER_ARRAY arr
#  2. 2D_INTEGER_ARRAY queries
#

def solve(arr, queries):
    result = []
    for i,j in q:
        if i<len(arr) and arr[i]== 0 and i!=j:
            result.append("Odd")
        else:
            if(arr[i-1]%2==0):
                result.append("Even")
            else:
                result.append("Odd")
    return result

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    arr_count = int(input().strip())

    arr = list(map(int, input().rstrip().split()))

    q = int(input().strip())

    queries = []

    for _ in range(q):
        queries.append(list(map(int, input().rstrip().split())))

    result = solve(arr, queries)

    fptr.write('\n'.join(result))
    fptr.write('\n')

    fptr.close()
