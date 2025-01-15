#include <iostream>

using namespace std;

int a;
int c;
char o;

void calc(int a, int c, char o)
{
    switch (o)
    {
        case '+':
        {
            printf("%d %c %d = %d", a, '+', c, a+c);
            break;
        }
         case '-':
        {
            printf("%d %c %d = %d", a, '-', c, a-c);
            break;
        }
        case '/':
        {
            printf("%d %c %d = %d", a, '/', c, a/c);
            break;
        }
        case '*':
        {
            printf("%d %c %d = %d", a, '*', c, a*c);
            break;
        }
        default:
        {
            printf("False");
            break;
        }   
    }
}

int main() {
    cin >> a >> o >> c;

    calc(a, c, o);

    return 0;
}