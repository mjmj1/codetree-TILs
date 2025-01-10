#include <iostream>

using namespace std;

int n;
int grid[100][100];

int dx[4] = { 0, 1, 0, -1 }, dy[4] = { 1, 0, -1, 0 };

bool is_valid(int num)
{
    if (num < 0) return false;
    if (num >= n) return false;

    return true;
};

int main()
{
    int result = 0;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> grid[i][j];
        }
    }

    for (int y = 0; y < n; y++)
    {
        for (int x = 0; x < n; x++)
        {
            int cnt = 0;

            for (int dir_num = 0; dir_num < 4; dir_num++)
            {
                int nx = x + dx[dir_num], ny = y + dy[dir_num];

                if (is_valid(nx) && is_valid(ny))
                {
                    if (grid[ny][nx] == 1)
                    {
                        cnt++;
                    }
                }
            }
            
            if (cnt >= 3)
            {
                result++;
            }
        }
    }

    printf("%d", result);

    return 0;
}