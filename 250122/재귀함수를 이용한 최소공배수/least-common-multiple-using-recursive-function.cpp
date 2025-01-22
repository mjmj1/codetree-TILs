#include <iostream>
#include <math.h>

using namespace std;

int n;
int arr[10];

int get_lcd(int m)
{
    if(m % 2 == 0)
    {
        return 2 * get_lcd(m / 2);
    }
    else if(m % 3 == 0)
    {
        return 3 * get_lcd(m / 3);
    }
    else
    {
        return m;
    }
}

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int res = 1;

    for(int i = 0; i < n; i++)
    {
        res *= get_lcd(arr[i]);
    }

    printf("%d", res / 6);

    return 0;
}