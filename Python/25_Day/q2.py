import numpy

numpy.set_printoptions(sign=' ')
num = numpy.array(input().split(),float)

print(numpy.floor(num))
print(numpy.ceil(num))
print(numpy.rint(num))