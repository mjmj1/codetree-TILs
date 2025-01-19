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

    if(M > 12 || D < 0 || calender[M - 1] < D)
    {
        printf("No");
        
        return 0;
    }

    printf("Yes");

    return 0;
}