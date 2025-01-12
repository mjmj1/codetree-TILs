#include <iostream>

using namespace std;

int N;
char dir[100];
int dist[100];

int* get_direction(char dir)
{
    switch (dir)
    {
    case 'W':
        return new int[2] { 0, -1 };
    case 'S':
        return new int[2] { 1, 0 };
    case 'N':
        return new int[2] { -1, 0 };
    case 'E':
        return new int[2] { 0, 1 };
    }
}

int main()
{
    cin >> N;

    for (int i = 0; i < N; i++)
    {
        cin >> dir[i] >> dist[i];
    }

    int count = 0;
    int nx = 0, ny = 0;

    for(int i = 0; i < N; i++)
    {
        int* dir_int = get_direction(dir[i]);

        for(int j = 0; j < dist[i]; j++)
        {
            ny += dir_int[0];
            nx += dir_int[1];

            count++;

            if(nx == 0 && ny == 0)
            {
                printf("%d", count);

                return 0;
            }
        }
    }

    printf("%d", -1);

    return 0;
}