#include <iostream>
#include <string>

using namespace std;

string A;

bool is_diff(string str)
{
    for(int i = 1; i < str.length(); i++)
    {
        if(str[i - 1] != str[i])
        {
            return true;
        }
    }

    return false;
}

int main() {
    cin >> A;

    if(is_diff(A))
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }

    return 0;
}