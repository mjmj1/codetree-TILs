#include <iostream>
#include <sstream>
#include <vector>
#include <map>
using namespace std;

int main() {
    int n;
    cin >> n;

    string* dir = new string[n];
    int* move = new int[n];

    for(int i = 0; i < n; i++)
    {
        cin >> dir[i] >> move[i];
    }

    map<string, int*> m;
    m.insert(make_pair("N", new int[2] {0, 1}));
    m.insert(make_pair("S", new int[2] {0, -1}));
    m.insert(make_pair("E", new int[2] {1, 0}));
    m.insert(make_pair("W", new int[2] {-1, 0}));

    int* xy = new int[2] {0, 0};

    for(int i = 0; i < n; i++)
    {
        xy[0] += m[dir[i]][0] * move[i];
        xy[1] += m[dir[i]][1] * move[i];
    }

    printf("%d %d", xy[0], xy[1]);

    return 0;
}