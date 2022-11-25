import numpy

N,M,P = map(int, input().split())

vec1 = []
for i in range(N):
    vec1.append(list(map(int,input().split())))

vec2 = []
for i in range(M):
    vec2.append(list(map(int,input().split())))

N_array = numpy.array(vec1)
M_array = numpy.array(vec2)
print(numpy.concatenate((N_array,M_array)))