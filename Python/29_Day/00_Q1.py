# https://www.hackerrank.com/contests/int213day29/challenges/np-transpose-and-flatten

import numpy
import sys

numpyArray = numpy.array(
        [inp.split() for inp in list(sys.stdin)[1:]],
        int
    )
print(numpyArray.T, numpyArray.flatten(), sep='\n')