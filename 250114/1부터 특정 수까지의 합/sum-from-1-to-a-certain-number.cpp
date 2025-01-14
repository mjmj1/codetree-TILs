#include <iostream>

using namespace std;

int N;

int get_sum(int n)
{
    int res = 0;

    for(int i = 1; i <= n; i++)
    {
        res += i;
    }

    return res / 10;
}

int main() {
    cin >> N;

    printf("%d", get_sum(N));

    return 0;
}