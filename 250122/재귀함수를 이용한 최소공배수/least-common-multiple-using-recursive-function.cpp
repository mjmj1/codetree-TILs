#include <iostream>
#include <math.h>

using namespace std;

int n;
int arr[10];

int fun(int n_)
{
    if(n_ == -1) return 1;

    int n1 = arr[n_];

    for(int i = sqrt(arr[n_]); i > 1; i--)
    {
        if(arr[n_] % i == 0)
        {
            n1 = arr[n_] / i;
            break;
        }
    }

    return n1 * fun(n_ - 1);
}

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    printf("%d", fun(n - 1));

    return 0;
}