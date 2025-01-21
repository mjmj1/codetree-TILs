#include <iostream>

using namespace std;

int n;
int arr[100];

int fun(int num)
{
    if(num == 0)
    {
        return arr[0];
    }

    return max(fun(num - 1), arr[num]);
}

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    printf("%d", fun(n - 1));

    return 0;
}