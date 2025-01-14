#include <iostream>

using namespace std;

int a, b, c;

int get_min(int n1, int n2, int n3)
{
    return min(min(n1, n2), n3);
}

int main() {
    cin >> a >> b >> c;

    printf("%d", get_min(a, b, c));

    return 0;
}