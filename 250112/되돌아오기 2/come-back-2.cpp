#include <iostream>
#include <string>

using namespace std;

string commands;

bool get_rot_dir(char v)
{
    if(v == 'R')
    {
        return true;
    }
}

int main() {
    int start[2] = { 0, 0 };
    int dir[4][2] = 
    {
        { -1, 0 },
        { 0, 1 },
        { 1, 0 },
        { 0, -1 }
    };

    cin >> commands;
    
    int rot = 0;
    int time = 0;

    for(int i = 0; i < commands.length(); i++)
    {
        if(commands[i] == 'R')
        {
            rot = (rot + 1) % 4;
        }
        else if(commands[i] == 'L')
        {
            rot = (abs(rot - 1)) % 4;
        }
        else
        {
            start[0] += dir[rot][0];
            start[1] += dir[rot][1];
        }

        time++;

        if(start[0] == 0 && start[1] == 0)
        {
            printf("%d", time);
            return 0;
        }
    }

    printf("%d", -1);

    return 0;
}