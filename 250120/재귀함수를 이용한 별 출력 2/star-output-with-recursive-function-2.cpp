#include <iostream>

using namespace std;

int n;

void fun(int num)
{
    if(num == 0) return;

    for(int i = 0; i < num; i++)
    {
        printf("* ");
    }
    printf("\n");

    fun(num - 1);

    for(int i = 0; i < num; i++)
    {
        printf("* ");
    }
    printf("\n");
}

int main() {
    cin >> n;

    fun(n);

    return 0;
}