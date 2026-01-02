board = [list(map(int, input().split())) for _ in range(19)]
length = 19
chkX = [[-2, -1, 1, 2], [0, 0, 0, 0], [-2, -1, 1, 2], [-2, -1, 1, 2]]
chkY = [[0, 0, 0, 0], [-2, -1, 1, 2], [2, 1, -1, -2], [-2, -1, 1, 2]]

win=0
posX=-1
posY=-1
for i in range(length): # y
    if win > 0: break
    for j in range(length): # x
        if win > 0: break
        cur = board[i][j]
        if cur == 0: continue
        for dx, dy in zip(chkX, chkY):
            cnt = 1
            for x, y in zip(dx, dy):
                iy = i + y
                jx = j + x
                if(iy < 0 or iy >= length): break
                if(jx < 0 or jx >= length): break

                if board[iy][jx] == cur:
                    cnt+=1
            if cnt == 5:
                win = cur
                posX = j+1
                posY = i+1
                break

print(win)
if(win > 0):
    print(posY, posX)
