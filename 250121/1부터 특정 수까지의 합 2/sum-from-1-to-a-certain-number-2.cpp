#include <iostream>

using namespace std;

int N;

int fact(int num)
{
    if(num == 1)
        return 1;
    
    return fact(num - 1) + num;
}

int main() {
    cin >> N;

    int res = fact(N);

    printf("%d", res);

    return 0;
}