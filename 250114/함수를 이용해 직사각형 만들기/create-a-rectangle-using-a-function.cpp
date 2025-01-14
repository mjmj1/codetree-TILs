#include <iostream>

using namespace std;

int n, m;

void print_rect(int n, int m)
{
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            printf("1");
        }
        printf("\n");
    }
}

int main() {
    cin >> n >> m;

    print_rect(n, m);

    return 0;
}