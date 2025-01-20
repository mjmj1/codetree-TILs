#include <iostream>

using namespace std;

int n;
int arr[50];

void print_abs(int num[])
{
    for(int i = 0; i < n; i++)
    {
        if(num[i] < 0)
        {
            num[i] = -num[i];
        }
        
        printf("%d ", num[i]);
    }
}

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    print_abs(arr);

    return 0;
}