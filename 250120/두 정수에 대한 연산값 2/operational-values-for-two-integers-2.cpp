#include <iostream>

using namespace std;

int a, b;

void calc(int &n1, int &n2)
{
    if(n1 > n2)
    {
        n2 += 10;
        n1 *= 2;
    }
    else if(n1 < n2)
    {
        n1 += 10;
        n2 *= 2;
    }
}

int main() {
    cin >> a >> b;

    calc(a, b);

    printf("%d %d", a, b);

    return 0;
}