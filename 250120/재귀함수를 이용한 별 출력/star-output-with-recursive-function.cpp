#include <iostream>

using namespace std;

int n;

void print_star(int num)
{
    if(num == 0) return;

    print_star(num - 1);

    for(int i = 0; i < num; i++)
    {
        printf("*");
    }

    printf("\n");
}

int main() {
    cin >> n;

    print_star(n);

    return 0;
}