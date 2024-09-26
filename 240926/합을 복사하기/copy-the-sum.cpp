#include <iostream>
using namespace std;

int main() {
    int a = 1;
    int b = 2;
    int c = 3;
    
    int res = a + b + c;

    a = b = c = res;

    printf("%d %d %d", a, b, c);
    return 0;
}