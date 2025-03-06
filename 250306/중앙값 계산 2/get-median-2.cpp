#include <iostream>
#include <algorithm>

using namespace std;

int n;
int arr[100];

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for (int i = 1; i <= n; i++)
    {
        if(i % 2 == 1)
        {
            int temp[100];
            copy_n(arr, i, temp);

            sort(temp, temp + i);

            printf("%d ", temp[i / 2]);
            
        }
    }

    return 0;
}