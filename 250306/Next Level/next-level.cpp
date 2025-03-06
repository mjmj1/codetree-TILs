#include <iostream>
#include <string>

using namespace std;

class User2 {
    public:
        string id;
        int level;

        User2() {
            this->id = "codetree";
            this->level = 10;
        }

        User2(string id, int level) {
            this->id = id;
            this->level = level;
        }
};

string user2_id;
int user2_level;

int main() {
    cin >> user2_id >> user2_level;

    User2* user21 = new User2();
    User2* user22 = new User2(user2_id, user2_level);

    printf("user %s lv %d\n", user21->id.c_str(), user21->level);
    printf("user %s lv %d", user22->id.c_str(), user22->level);

    return 0;
}