#include <iostream>

using namespace std;

int N, M;
int r[10000], c[10000];
int dir[4][2] =
{
    { -1, 0 },
    { 0, 1 },
    { 1, 0 },
    { 0, -1 }
};

bool in_range(int x, int y)
{
    return (x < N && x >= 0) && (y < N && y >= 0);
}

bool is_comfortable(int** grid, int r_, int c_)
{
    int count = 0;

    for (int i = 0; i < 4; i++)
    {
        int nr = r_ + dir[i][0];
        int nc = c_ + dir[i][1];

        if (in_range(nc, nr))
        {
            if (grid[nr][nc] == 1)
            {
                count++;
            }
        }
    }

    if (count == 3)
    {
        return true;
    }

    return false;
}


int main()
{
    cin >> N >> M;

    int** grid = new int* [N];
    for (int i = 0; i < N; i++)
    {
        grid[i] = new int[N];
    }

    string result = "";

    for (int i = 0; i < M; i++)
    {
        cin >> r[i] >> c[i];

        int nr = r[i] - 1;
        int nc = c[i] - 1;

        grid[nr][nc] = 1;

        if (is_comfortable(grid, nr, nc))
        {
            result += "1\n";
        }
        else
        {
            result += "0\n";
        }
    }

    printf(result.c_str());

    return 0;
}