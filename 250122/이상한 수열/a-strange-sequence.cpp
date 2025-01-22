#include <iostream>

using namespace std;

int N;

int fun(int n)
{
    if(n == 1) return 1;
    if(n == 2) return 2;

    return fun(n / 3) + fun(n - 1);
}

int main() {
    cin >> N;

    printf("%d", fun(N));

    return 0;
}