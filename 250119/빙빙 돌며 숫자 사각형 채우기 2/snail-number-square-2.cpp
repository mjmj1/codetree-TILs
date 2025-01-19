#include <iostream>

using namespace std;

int n, m;

int arr[100][100] = { 0, };

int dir[4][2] =
{
    { 1, 0 },
    { 0, 1 },
    { -1, 0 },
    { 0, -1 },
};

bool in_range(int x, int y)
{
    return (m > x && x >= 0) && (n > y && y >= 0);
}

int main()
{
    cin >> n >> m;

    int cnt = 2;
    int nx = 0, ny = 0;
    int dx = 0, dy = 0;
    int rot = 0;

    arr[0][0] = 1;

    for (int i = 0; i < n * m - 1; i++)
    {
        dx = nx + dir[rot][1], dy = ny + dir[rot][0];

        if (!in_range(dx, dy) || arr[dy][dx] != 0)
        {
            rot = (rot + 1) % 4;
        }

        nx += dir[rot][1], ny += dir[rot][0];

        arr[ny][nx] = cnt++;
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}