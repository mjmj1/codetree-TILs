#include <iostream>

using namespace std;

int y;
bool is_leap_year(int year)
{
    if(year % 4 == 0)
    {
        if(year % 100 == 0 && year % 400 != 0)
        {
            return false;
        }

        return true;
    }

    return false;
}

int main() {
    cin >> y;

    printf("%s", is_leap_year(y) ? "true" : "false");

    return 0;
}