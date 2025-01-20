#include <iostream>

using namespace std;

int N;

void print_num(int num)
{
    if(num == N + 1)
        return;
    
    printf("%d ", num);

    print_num(num + 1);
}

void print_numr(int num)
{
    if(num == 0)
        return;

    printf("%d ", num);

    print_numr(num - 1);
}

int main() {
    cin >> N;

    print_num(1);
    printf("\n");
    print_numr(N);

    return 0;
}