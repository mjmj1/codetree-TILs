#include <iostream>

using namespace std;

int n, m;

char arr[100][100];

int dir[4][2] =
{
    { 0, 1 },
    { 1, 0 },
    { 0, -1 },
    { -1, 0 },
};

bool in_range(int x, int y)
{
    return (m > x && x >= 0) && (n > y && y >= 0);
}

int main()
{
    cin >> n >> m;

    char cnt = 0;
    int nx = 0, ny = 0;
    int dx = 0, dy = 0;
    int rot = 0;

    arr[0][0] = 65;

    for (int i = 0; i < n * m - 1; i++)
    {
        dx = nx + dir[rot][1], dy = ny + dir[rot][0];

        if (!in_range(dx, dy) || arr[dy][dx] != 0)
        {
            rot = (rot + 1) % 4;
        }

        nx += dir[rot][1], ny += dir[rot][0];

        cnt = (cnt + 1) % 26;

        arr[ny][nx] = 65 + cnt;
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("%c ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}