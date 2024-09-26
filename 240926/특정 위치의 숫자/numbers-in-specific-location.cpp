#include <iostream>
using namespace std;

int main() {
    int arr[10] = {0};

    for(int i = 0; i < 10; i++)
    {
        cin >> arr[i];
    }

    int sum = arr[2] + arr[4] + arr[9];
    

    printf("%d", sum);
    return 0;
}