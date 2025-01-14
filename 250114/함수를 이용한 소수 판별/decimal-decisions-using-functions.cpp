#include <iostream>
#include <math.h>
using namespace std;

int a, b;

bool is_prime(int n) {
    for(int i = 2; i <= sqrt(n); i++)
    {
        if(n % i == 0)
        {
            return false;
        }
    }

    return true;
}

int get_all_prime(int n1, int n2)
{
    int sum = 0;

    for(int i = n1; i <= n2; i++)
    {
        if(is_prime(i))
        {
            sum += i;
        }
    }

    return sum;
}

int main() {
    cin >> a >> b;

    printf("%d", get_all_prime(a, b));



    return 0;
}