N, M = map(int, input().split())
arr = [input() for _ in range(N)]

direct = [[1, 2], [1, 2], [0, 0], [-1, -2], [-1, -2], [-1, -2], [ 0,  0], [ 1,  2]]
length = len(direct)
result = 0

for i in range(N):
    for j in range(M):
        if not arr[i][j] == 'L': continue
        idx = 0 #++
        idy = 2 #--
        cnt = 0
        for _ in range(len(direct)):
            dx = direct[idx]
            dy = direct[idy]
            cnt = 0
            for (x, y) in zip(dx, dy):
                jx = j + x
                iy = i + y
                if jx < 0 or jx >= M: break
                if iy < 0 or iy >= N: break
                if arr[iy][jx] != 'E': break
                cnt+=1
            if cnt == 2:
                result+=1
            
            idx = (idx+1) % length
            idy = (idy+7) % length

print(result)