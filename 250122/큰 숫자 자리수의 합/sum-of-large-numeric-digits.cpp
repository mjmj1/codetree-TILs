#include <iostream>

using namespace std;

int a, b, c;

int fun(int n)
{
    if(n < 10) return n;

    return fun(n / 10) + n % 10;
}

int main() {
    cin >> a >> b >> c;

    printf("%d", fun(a * b * c));

    return 0;
}