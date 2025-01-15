#include <iostream>
#include <cmath>

using namespace std;

int a, b;

bool is_string_even(int n)
{
    int res = 0;

    string str = to_string(n);

    for(int i = 0; i < str.length(); i++)
    {
        res += (str[i] - '0');
    }

    if(res % 2 == 0)
    {
        return true;
    }

    return false;
}

bool is_prime(int n)
{
    if(n < 2) return false;

    for(int i = 2; i <= sqrt(n); i++)
    {
        if(n % i == 0)
        {
            return false;
        }
    }

    return true;
}

int main() {
    cin >> a >> b;

    int count = 0;
    
    for(int i = a; i <= b; i++)
    {
        if(is_prime(i) && is_string_even(i))
        {
            count++;
        }
    }

    printf("%d", count);

    return 0;
}