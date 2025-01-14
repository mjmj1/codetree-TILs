#include <iostream>

using namespace std;

int n, m;

int get_lcm(int n, int m)
{
    for(int i = 1; i <= n; i++)
    {
        if((m * i) % n == 0)
        {
            return m*i;
        }
    }
}

int main() {
    cin >> n >> m;

    printf("%d", get_lcm(n, m));

    return 0;
}