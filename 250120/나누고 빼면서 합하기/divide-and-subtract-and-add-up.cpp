#include <iostream>

using namespace std;

int n, m;
int A[100];

int get_arr_idx(int num)
{
    if(num % 2 == 0)
    {
        return num / 2;
    }
    else
    {
        return num - 1;
    }
}

int main() {
    cin >> n >> m;

    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }

    int nm = m;
    int res = 0;

    res += A[nm - 1];

    while (nm != 1)
    {    
        nm = get_arr_idx(nm);
        res += A[nm - 1];
    }

    printf("%d", res);

    return 0;
}