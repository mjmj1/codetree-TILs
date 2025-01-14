#include <iostream>

using namespace std;

int N;

void print_rect(int n)
{
    int count = 0;

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            printf("%d ", (count++ % 9) + 1);
        }

        printf("\n");
    }
}

int main() {
    cin >> N;

    print_rect(N);

    return 0;
}