#include <iostream>

using namespace std;

int N;

int fun(int n)
{
    if(n == 1) return 2;
    if(n == 2) return 4;

    return fun(n - 1) * fun(n - 2) % 100;
}

int main() {
    cin >> N;

    printf("%d", fun(N));

    return 0;
}