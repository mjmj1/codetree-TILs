#include <iostream>
using namespace std;

int main() {
    string str1, str2;
    cin >> str1 >> str2;

    string str = str2 + "\n" + str1;
    printf(str.c_str());
    return 0;
}