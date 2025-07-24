import math

def A055642(n):
    if n <= 0:
        return 0
    return math.floor(1+math.log10(n))

for i in range(1, 1001):
    print(A055642(i))