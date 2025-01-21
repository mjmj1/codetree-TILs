#include <iostream>

using namespace std;

int N;

void fun(int& count, int n)
{
    if(n == 1) return;

    count++;

    if(n % 2 == 0)
    {
        fun(count, n / 2);
        return;
    }
    else
    {
        fun(count, n / 3);
        return;
    }
    
}

int main() {
    cin >> N;

    int count = 0;
    fun(count, N);
    printf("%d", count);

    return 0;
}