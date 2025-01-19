#include <iostream>

using namespace std;

int n1, n2;
int a[100], b[100];

bool is_sequence(int start)
{
    for(int i = 0; i < n2; i++)
    {
        if(a[start + i] != b[i])
        {
            return false;
        }
    }

    return true;
}

int main() {
    cin >> n1 >> n2;

    for (int i = 0; i < n1; i++) cin >> a[i];

    for (int i = 0; i < n2; i++) cin >> b[i];

    for(int i = 0; i < n1; i++)
    {
        if(a[i] == b[0])
        {
            if(is_sequence(i))
            {
                printf("Yes");

                return 0;
            }
        }
    }

    printf("No");

    return 0;
}