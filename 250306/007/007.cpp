#include <iostream>
#include <string>

using namespace std;

string secret_code;
char meeting_point;
int time_;

struct mission
{
    string secret_code;
    char meeting_point;
    int time;        
};

int main() {
    cin >> secret_code >> meeting_point >> time_;

    mission miss;
    miss.secret_code = secret_code;
    miss.meeting_point = meeting_point;
    miss.time = time_;

    printf("secret code : %s\n", miss.secret_code.c_str());
    printf("meeting point : %c\n", miss.meeting_point);
    printf("time : %d", miss.time);

    return 0;
}