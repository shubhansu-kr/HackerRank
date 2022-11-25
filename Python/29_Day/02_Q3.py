import numpy as np

nupy = np.array(input().split(), float)
print(np.polyval(nupy, float(input())))