import numpy

temp1 , temp2 = map(int,input().split())
vector = numpy.array([list(map(int,input().split())) for i in range(temp1 )])
print(numpy.mean(vector,axis=1),numpy.var(vector,axis=0),round(numpy.std(vector,axis=None),11),sep='\n')