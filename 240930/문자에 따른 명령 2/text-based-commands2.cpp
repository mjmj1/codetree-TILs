#include <iostream>
using namespace std;

int main() {
    string cmd;
    cin >> cmd;

    int* dx = new int[4] {0, 1, 0, -1};
    int* dy = new int[4] {1, 0, -1, 0};

    int dir = 0;

    int* curPos = new int[2] {0, 0};

    for(int i = 0; i < cmd.length(); i++)
    {
        if(cmd[i] == 'R')
        {
            dir = (dir + 1) % 4;
        }
        else if(cmd[i] == 'L')
        {
            dir = (dir + 3) % 4;
        }
        else
        {
            curPos[0] += dx[dir];
            curPos[1] += dy[dir];
        }
    }

    printf("%d %d", curPos[0], curPos[1]);

    return 0;
}