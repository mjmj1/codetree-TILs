import sys

n = int(input())
numbers = list(map(int, input().split()))

maxVal = -sys.maxsize
for i in range(n):
    for j in range(n):
        if i == j: continue
        if i + 1 == j or i - 1 == j: continue
        maxVal = max(maxVal, numbers[i] + numbers[j])

print(maxVal)
