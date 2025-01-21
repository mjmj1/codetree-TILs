#include <iostream>

using namespace std;

int N;

int F(int n)
{
    if(n == 1 || n == 2)
        return 1;
    
    return F(n - 1) + F(n - 2);
}

int main() {
    cin >> N;

    printf("%d", F((N)));

    return 0;
}