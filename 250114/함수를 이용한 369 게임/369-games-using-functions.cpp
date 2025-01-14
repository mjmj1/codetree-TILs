#include <iostream>

using namespace std;

int a, b;

bool is_three(int n)
{
    if (n % 3 == 0)
    {
        return true;
    }

    return false;
}

bool is_in_three(int n)
{
    string str = to_string(n);

    for(int i = 0; i < str.length(); i++)
    {
        if(str[i] == '3' || str[i] == '6' || str[i] == '9')
        {
            return true;
        }
    }

    return false;
}

int main() {
    cin >> a >> b;

    int count = 0;

    for(int i = a; i <= b; i++)
    {
        if(is_three(i) || is_in_three(i))
        {
            count++;
        }
    }

    printf("%d", count);

    return 0;
}