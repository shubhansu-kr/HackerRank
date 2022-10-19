import numpy
X, Y = map(int, input().split())

num1 = numpy.array([list(map(int, input().split())) for n in range(X)])
num2 = numpy.array([list(map(int, input().split())) for n in range(X)])

print(num1 + num2)
print(num1 - num2)
print(num1 * num2)
print(num1 // num2)
print(num1 % num2)
print(num1**num2)