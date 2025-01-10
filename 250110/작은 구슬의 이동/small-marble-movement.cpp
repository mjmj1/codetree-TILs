#include <iostream>

using namespace std;

int n, t;
int r, c;
char d;

bool in_range(int x, int y)
{
    if ((x < n and x > 0) and (y < n and y > 0)) return true;
    return false;
}

int* get_direction(char dir)
{
    switch (dir)
    {
    case 'U':
        return new int[2] { 1, 0 };
    case 'D':
        return new int[2] { -1, 0 };
    case 'R':
        return new int[2] { 0, 1 };
    case 'L':
        return new int[2] { 0, -1 };
    }
}

int main()
{
    cin >> n >> t;
    cin >> r >> c >> d;

    int* dir = get_direction(d);

    int x = c, y = r;

    for (int i = t; i > 0; i--)
    {
        int nx = x + dir[1], ny = y + dir[0];

        if (in_range(nx, ny))
        {
            x = nx;
            y = ny;
        }
        else
        {
            dir[0] = dir[0] * -1;
            dir[1] = dir[1] * -1;
        }
    }

    printf("%d %d", y, x);

    return 0;
}