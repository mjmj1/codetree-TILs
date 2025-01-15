#include <iostream>

using namespace std;

int a, b;

int is_ojs(int n)
{
    if(n % 2 == 0) return false;
    if(n % 10 == 5) return false;
    if(n % 3 == 0 && n % 9 != 0) return false;

    return true;
}

int main() {
    cin >> a >> b;

    int count = 0;
    for(int i = a; i <= b; i++)
    {
        if(is_ojs(i))
        {
            count++;
        }
    }

    printf("%d", count);

    return 0;
}