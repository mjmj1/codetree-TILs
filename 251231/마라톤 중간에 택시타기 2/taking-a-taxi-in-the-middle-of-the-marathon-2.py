import sys

n = int(input())
points = [tuple(map(int, input().split())) for _ in range(n)]
x = [p[0] for p in points]
y = [p[1] for p in points]

dis = sys.maxsize
cur = 0

for i in range(1, n):
    cur = 0
    for j in range(0, n - 1):
        if j == i: continue
        for k in range(j + 1, n):
            if k == i: continue
            cur += abs(x[j] - x[k]) + abs(y[j] - y[k])
            break

    dis = min(dis, cur)

print(dis)