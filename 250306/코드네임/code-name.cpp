#include <iostream>
#include <algorithm>

#define MAX_N 5

using namespace std;

class Agent {
    public:
        char codename;
        int score;

        Agent(char codename, int score)
        {
            this->codename = codename;
            this->score = score;
        }
};


char codename[MAX_N];
int score[MAX_N];
Agent* agents[MAX_N];

bool func(Agent* ag1, Agent* ag2)
{
    return ag1->score < ag2->score;
}

int main() {
    for (int i = 0; i < MAX_N; i++) {
        cin >> codename[i] >> score[i];
    }

    for (int i = 0; i < MAX_N; i++)
    {
        Agent* agent = new Agent(codename[i], score[i]);
        agents[i] = agent;
    }

    sort(agents, agents + MAX_N, func);

    printf("%c %d", agents[0]->codename, agents[0]->score);


    return 0;
}
