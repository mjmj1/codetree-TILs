#include <iostream>

using namespace std;

int a, b;

void calc(int n1, int n2)
{
    if(n1 > n2)
    {
        printf("%d %d", n1 + 25, n2 * 2);
    }
    else
    {
        printf("%d %d", n1 * 2, n2 + 25);   
    }
}

int main() {
    cin >> a >> b;

    calc(a, b);

    return 0;
}