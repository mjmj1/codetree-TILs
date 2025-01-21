#include <iostream>

using namespace std;

int N;

int F(int n)
{
    if(n <= 2)
    {    
        if(n % 2 == 0)
        {
            return 2;
        }
        else
        {
            return 1;
        }
    }

    return F(n - 2) + n;   
}

int main() {
    cin >> N;

    printf("%d", F(N));

    return 0;
}