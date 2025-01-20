#include <iostream>

using namespace std;

int N;

void fun(int num)
{
    if(num == 0) return;

    printf("%d ", num);

    fun(num - 1);

    printf("%d ", num);
}

int main() {
    cin >> N;

    fun(N);

    return 0;
}