#include <iostream>

using namespace std;

int n, m;
int arr[100];
int res[100];

int get_add(int n1, int n2)
{
    int out = 0;

    for(int i = n1 - 1; i < n2; i++)
    {
        out += arr[i];      
    }

    return out;
}

int main() {
    cin >> n >> m;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for (int i = 0; i < m; i++) {
        int a1, a2;
        cin >> a1 >> a2;

        res[i] = get_add(a1, a2);
    }

    for (int i = 0; i < m; i++)
    {
        printf("%d\n", res[i]);
    }

    return 0;
}