#include <iostream>
#include <string>
using namespace std;

int main() {
    int a;
    cin >> a;
    
    string str = "";

    for(int i = 1; i <= a; i++)
    {
        if(i % 2 == 0 || i % 3 == 0)
        {
            str += "1";
        }
        else
        {
            str += "0";
        }

        str += " ";
    }

    printf(str.c_str());
    return 0;
}