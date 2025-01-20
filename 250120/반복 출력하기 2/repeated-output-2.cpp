#include <iostream>

using namespace std;

int N;

void print_hello(int num)
{
    if(num == 0)
        return;
    
    print_hello(num - 1);

    printf("HelloWorld\n");
}

int main() {
    cin >> N;

    print_hello(N);

    return 0;
}