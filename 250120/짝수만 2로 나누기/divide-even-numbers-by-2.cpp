#include <iostream>

using namespace std;

int n;
int arr[50];

void divide_two_even(int a)
{
    if(a % 2 == 0)
    {
        printf("%d ", a / 2);
    }
    else
    {
        printf("%d ", a);
    }
}

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for(int i = 0; i < n; i++)
    {
        divide_two_even(*(arr + i));
    }


    return 0;
}