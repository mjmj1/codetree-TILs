#include <iostream>

using namespace std;

int M, D;

int calender[12] =
{
    31,
    28,
    31,
    30,
    31,
    30,
    31,
    31,
    30,
    31,
    30,
    31,
};

int main() {
    cin >> M >> D;

    if(calender[M - 1] >= D)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }

    return 0;
}