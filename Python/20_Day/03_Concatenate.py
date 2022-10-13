import numpy
P, N, M = map(int,input().split())
list1 = numpy.array([input().split() for i in range(P)],int)
list2 = numpy.array([input().split() for j in range(N)],int)
print(numpy.concatenate((list1, list2), axis = 0))