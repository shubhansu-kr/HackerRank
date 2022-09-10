#!/bin/python3

import math
import os
import random
import re
import sys

#
# Complete the 'stringReduction' function below.
#
# The function is expected to return an INTEGER.
# The function accepts STRING s as parameter.

def stringReduction(s):
    return 1

# def stringReduction(s):
#     counta = 0
#     countb = 0
#     countc = 0
#     for i in s: 
#         if (i == 'a'): 
#             counta += 1
#         elif (i == 'b'):
#             countb += 1
#         else: 
#             countc += 1
    
#     if (counta == len(s) or countb == len(s) or countc == len(s)):
#         return len(s)

#     if (((counta % 2) == (countb % 2)) and ((countb%2) == (counta % 2))): 
#         return 2

    # return 1

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    t = int(input().strip())

    for t_itr in range(t):
        s = input()

        result = stringReduction(s)

        fptr.write(str(result) + '\n')

    fptr.close()

