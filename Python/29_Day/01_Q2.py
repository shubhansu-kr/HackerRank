import numpy

size = int(input())
vec1 = []
vec2 = []
for index in range(size):
    a = [int(index) for index in input().split()]
    vec1.append(a)
for index in range(size):
    b = [int(index) for index in input().split()]
    vec2.append(b)

print(numpy.dot(vec1, vec2))
