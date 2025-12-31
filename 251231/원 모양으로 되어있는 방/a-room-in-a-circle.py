import sys

n = int(input())
a = [int(input()) for _ in range(n)]

minVal = sys.maxsize

for i in range(0, n):
    temp = 0
    for j in range(i, n + i):
        cur = j % n
        temp += a[cur] * (j - i)
    minVal = min(temp, minVal)

print(minVal)