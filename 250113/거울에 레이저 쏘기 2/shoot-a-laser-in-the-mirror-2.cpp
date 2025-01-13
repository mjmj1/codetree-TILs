#include <iostream>

using namespace std;

int n;
char grid[1000][1000];
int k;
int dir[4][2] =
{
    { 1, 0 },
    { 0, -1 },
    { -1, 0 },
    { 0, 1 }
};

bool in_range(int x, int y)
{
    return (x < n && x >= 0) && (y < n && y >= 0);
}

int* get_start_cell(int k, int n)
{
    int rot_cnt = k / n;
    int start_pt = k % n;

    int* lazer_dir = dir[rot_cnt];

    int start_y = 0;
    int start_x = 0;

    int prev_index;
    int* move_dir;

    for (int i = 0; i < rot_cnt; i++)
    {
        prev_index = (3 + i) % 4;
        move_dir = dir[prev_index];

        start_y = start_y + (move_dir[0] * (n - 1));
        start_x = start_x + (move_dir[1] * (n - 1));
    }

    if (start_pt > 1)
    {
        prev_index = (3 + rot_cnt) % 4;
        move_dir = dir[prev_index];

        start_y = start_y + (move_dir[0] * max(0, start_pt - 1));
        start_x = start_x + (move_dir[1] * max(0, start_pt - 1));
    }

    return new int[2] { start_y, start_x };
}

int* get_next_reflect_dir(int& dir_, int start_x, int start_y)
{
    if (grid[start_y][start_x] == '/')
    {
        if (dir_ % 2 == 0)
        {
            dir_ = (dir_ + 1) % 4;
        }
        else
        {
            dir_ = (dir_ + 3) % 4;
        }
    }
    else if (grid[start_y][start_x] == '\\')
    {
        if (dir_ % 2 == 0)
        {
            dir_ = (dir_ + 3) % 4;
            
        }
        else
        {
            dir_ = (dir_ + 1) % 4;
        }
    }

    int* lazer_dir = dir[dir_];
    return new int[2] { start_y + lazer_dir[0], start_x + lazer_dir[1] };
}

int main()
{
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> grid[i][j];
        }
    }

    cin >> k;


    int* start_cell = get_start_cell(k, n);

    int rot_cnt = k / n;

    int* lazer_dir = dir[rot_cnt];

    int nx = start_cell[1];
    int ny = start_cell[0];
    int dir_ = rot_cnt;
    int* next_cell;
    int count = 0;

    for (int i = 0; i < n; i++)
    {
        if (in_range(nx, ny))
        {
            next_cell = get_next_reflect_dir(dir_, nx, ny);
            nx = next_cell[1];
            ny = next_cell[0];

            count++;
        }
        else
        {
            break;
        }
    }

    printf("%d", count);

    return 0;
}