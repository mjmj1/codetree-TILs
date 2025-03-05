#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int n, k;
string t;
string str[100];

int main() {
    cin >> n >> k >> t;

    for (int i = 0; i < n; i++) {
        cin >> str[i];
    }

    vector<string> temp;

    for (int i = 0; i < n; i++)
    {
        if (str[i].rfind(t, 0) == 0)
        {
            temp.push_back(str[i]);
        }
    }

    sort(temp.begin(), temp.end());

    printf("%s", temp[k - 1].c_str());

    return 0;
}