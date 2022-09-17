#!/bin/python3

import math
import os
import random
import re
import sys

#
# Complete the 'miniMaxSum' function below.
#
# The function accepts INTEGER_ARRAY arr as parameter.
#

def miniMaxSum(arr):
    # Write your code here
    arr.sort()
    mini = 0 
    maxi = 0
    i = 0
    while(i < len(arr)): 
        if (i < 4):
            mini += arr[i]
        if (i > len(arr)-5): 
            maxi += arr[i]
        i += 1
    print(mini, maxi)




if __name__ == '__main__':

    arr = list(map(int, input().rstrip().split()))

    miniMaxSum(arr)