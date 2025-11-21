import math

def A000005(n: int) -> int:
    if n <= 0:
        return 0
    
    if n == 1:
        return 1

    lim = math.isqrt(n)

    count = 0

    for i in range(1, lim + 1):
        if n % i == 0:
            if i*i == n: # if i is square count once
                count += 1
            else: # if there are two devisors, count both
                count += 2

    return count

for i in range(50):
    print(A000005(i))
