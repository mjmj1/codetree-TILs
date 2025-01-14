#include <iostream>

using namespace std;

int N;

void write(int n)
{
    for(int i = 0; i < n; i++)
    {
        printf("12345^&*()_");
        printf("\n");
    }
}

int main() {
    cin >> N;

    write(N);

    return 0;
}