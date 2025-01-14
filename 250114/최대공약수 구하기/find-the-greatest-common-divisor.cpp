#include <iostream>

using namespace std;

int n, m;

int get_gcd(int n, int m)
{
    for(int i = min(n, m); i > 0; i--)
    {
        if(n % i == 0 && m % i == 0)
        {
            return i;
        }
    }
}

int main() {
    cin >> n >> m;

    printf("%d", get_gcd(n, m));

    return 0;
}