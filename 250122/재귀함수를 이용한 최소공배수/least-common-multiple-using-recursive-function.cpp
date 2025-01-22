#include <iostream>

using namespace std;

int n;
int arr[10];

int gcd(int a, int b)
{
    return b == 0 ? a : gcd(b, a % b);
}

int lcm(int a, int b)
{
    return (a * b) / gcd(a, b);
}

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    int result = arr[0];

    for (int i = 1; i < n; i++) {
        result = lcm(result, arr[i]);
    }

    printf("%d", result);

    return 0;
}