#include <iostream>

using namespace std;

int n;

void fun(int &count, int num)
{
    if (num == 1) return;

    count++;

    if(num % 2 == 0)
    {
        fun(count, num / 2);
    }
    else
    {
        fun(count, num * 3 + 1);
    }
}

int main() {
    cin >> n;

    int cnt = 0;

    fun(cnt, n);

    printf("%d", cnt);

    return 0;
}