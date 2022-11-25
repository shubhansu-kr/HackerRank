import numpy as np

vec1 = np.array(input().split(), int)
vec2 = np.array(input().split(), int)

print(np.inner(vec1, vec2))
print(np.outer(vec1, vec2))