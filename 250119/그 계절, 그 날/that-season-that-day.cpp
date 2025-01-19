#include <iostream>

using namespace std;

int Y, M, D;

bool is_leap_year(int year)
{
    if(year % 4 == 0)
    {
        if(year % 100 == 0)
        {
            if(year % 400 == 0)
            {
                return true;
            }

            return false;
        }

        return true;
    }

    return false;
}

int get_day(int y, int m)
{
    if(m == 2)
    {
        if(is_leap_year(y))
        {
            return 29;
        }
            
        
        return 28;
    }
    else if(m == 4 || m == 6 || m == 9 || m == 11)
        return 30;
    
    return 31;
}

void get_season(int m)
{
    switch (m)
    {
        case 3:
        case 4:
        case 5:
            printf("Spring");
            break;
        case 6:
        case 7:
        case 8:
            printf("Summer");
            break;
        case 9:
        case 10:
        case 11:
            printf("Fall");
            break;
        case 12:
        case 1:
        case 2:
            printf("Winter");
            break;        
    }
}

int main() {
    cin >> Y >> M >> D;

    int day = get_day(Y, M);

    if(day >= D)
    {
        get_season(M);
        return 0;
    }

    printf("%d", -1);
    

    return 0;
}