#include <iostream>

using namespace std;

int n;

void get_number(int n)
{
    int n1 = n / 10;
    int n2 = n % 10;

    if(n % 2 == 0 && (n1 + n2) % 5 == 0)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }
}

int main() {
    cin >> n;

    get_number(n);

    return 0;
}