#include <iostream>
#include <string>

using namespace std;

string A;

bool is_palindrome(string str)
{
    string rstr = "";

    for(int i = str.length() - 1; i >= 0; i--)
    {
        rstr += str[i];
    }

    if(rstr.compare(str) != 0)
    {
        return false;
    }

    return true;
}

int main() {
    cin >> A;

    if(is_palindrome(A))
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }

    return 0;
}