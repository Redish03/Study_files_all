#include <iostream>
#include <vector>

using namespace std;

int N, M;
vector<bool> knowPerson(N, false);
int partyPossible = 0;

void input()
{
    cin >> N >> M;

    int knowTruthPersonCnt;
    cin >> knowTruthPersonCnt;
    for (int i = 0; i < knowTruthPersonCnt; i++)
    {
        int num;
        cin >> num;
        knowPerson[num] = true;
    }

    for (int i = 0; i < M; i++)
    {
        int size;
        bool isContainKnowingPerson = false;
        vector<int> v;
        cin >> size;
        for (int j = 0; j < size; j++)
        {
            int num;
            cin >> num;
            v.push_back(num);

            if (knowPerson[num])
            {
                isContainKnowingPerson = true;
            }
        }

        if (isContainKnowingPerson)
        {
            for (int j = 0; j < v.size(); j++)
            {
                knowPerson[v[j]] = true;
            }
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    input();
}