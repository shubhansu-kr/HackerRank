#!/bin/python3
import math
import os
import operator
import re
import sys

if __name__ == '__main__':
    s = input()
    char = {}
    for c in s: 
        char[c] = char.get(c, 0) + 1

    sorted_d = dict( sorted(char.items(), key=operator.itemgetter(1),reverse=True))

    for i in char.keys(): 
        print(i, char[i])
# Yes I CODE  
# CODE : Copy other developer everyday 