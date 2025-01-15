#include <iostream>
#include <cmath>
using namespace std;

int a, b;

int get_power(int a, int b)
{
    return pow(a, b);
}

int main() {
    cin >> a >> b;

    printf("%d", get_power(a, b));

    return 0;
}