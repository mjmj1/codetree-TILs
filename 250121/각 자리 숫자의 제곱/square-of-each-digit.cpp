#include <iostream>

using namespace std;

int N;

int fun(int n)
{
    if(n < 10) return n * n;

    int num = n % 10;
    return fun(n / 10) + num * num;
}

int main() {
    cin >> N;

    printf("%d", fun(N));

    return 0;
}