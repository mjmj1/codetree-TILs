#include <iostream>

using namespace std;

int n, m;
int arr[100][100];

bool in_range(int x, int y)
{
    if ((x < m and x >= 0) and (y < n and y >= 0)) return true;

    return false;
}

int main()
{
    cin >> n >> m;

    int dy[4] = { 0, 1, 0, -1 }, dx[4] = { 1, 0, -1, 0 };
    int x = 0, y = 0;
    int dir_num = 0; // 0: 오른쪽, 1: 아래쪽, 2: 왼쪽, 3: 위쪽

    arr[y][x] = 1;

    for (int i = 2; i <= n * m; i++)
    {
        int nx = x + dx[dir_num], ny = y + dy[dir_num];
        
        if (!in_range(nx, ny) || arr[ny][nx] != 0)
        {
            dir_num = (dir_num + 1) % 4;
        }

        x = x + dx[dir_num];
        y = y + dy[dir_num];

        arr[y][x] = i;
    }

    for (int y = 0; y < n * m; y++)
    {
        for (int x = 0; x < n * n; x++)
        {
            if(arr[y][x] != 0)
                printf("%d ", arr[y][x]);
        }

        printf("\n");
    }

    return 0;
}