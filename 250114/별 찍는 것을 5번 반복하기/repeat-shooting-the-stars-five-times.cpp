#include <iostream>

using namespace std;

void draw_10_star()
{
    for(int i = 0; i < 10; i++)
    {
        printf("*");
    }
}

int main() {
    for(int i = 0; i < 5; i++)
    {
        draw_10_star();
        printf("\n");
    }

    return 0;
}