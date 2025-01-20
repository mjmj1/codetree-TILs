#include <iostream>
#include <string>

using namespace std;

string text;
string pattern;

bool find_pattern(int start)
{
    for(int j = 1; j < pattern.length(); j++)
    {
        if(text[start + j] != pattern[j])
        {
            return false;
        }
    }

    return true;
}

int find_str()
{
    int res = -1;

    for(int i = 0; i < text.length(); i++)
    {
        if(text[i] == pattern[0])
        {
            if(find_pattern(i))
            {
                res = i;

                return res;
            }
        }
    }

    return res;
}

int main() {
    cin >> text;
    cin >> pattern;

    printf("%d", find_str());

    return 0;
}