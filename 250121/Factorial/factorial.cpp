#include <iostream>

using namespace std;

int N;

int fact(int n)
{
    if(n == 0) return 1;

    return fact(n - 1) * n;
}

int main() {
    cin >> N;

    printf("%d", fact(N));

    return 0;
}