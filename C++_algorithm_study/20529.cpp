#include <iostream>
#include <vector>
#include <sstream>

using namespace std;

vector<string> mbti;
int dist = 0;
int mem = 1000000;
/*
void MBTI()
{
    for (int i = 0; i < mbti.size(); i++)
    {
        string cur, next;
        if (i == mbti.size() - 1)
        {
            cur = mbti[0];
            next = mbti[mbti.size() - 1];
        }
        else
        {
            cur = mbti[i];
            next = mbti[i + 1];
        }
        for (int j = 0; j < 4; j++)
        {
            if (cur[j] != next[j])
            {
                dist++;
            }
        }
    }
}*/

void MBTI()
{
    for (int i = 0; i < mbti.size(); i++)
    {
        for (int j = 0; j < mbti.size() - 1; j++)
        {
            for (int k = 0; k < mbti.size(); k++)
            {
                string pre, mid, next;
                pre = mbti[i];
                mid = mbti[j];
                next = mbti[k];

                if (i == mbti.size() - 2)
                {
                    pre = mbti[mbti.size() - 2];
                    mid = mbti[mbti.size() - 1];
                    next = mbti[0];
                }
                if (i == mbti.size() - 1)
                {
                    pre = mbti[mbti.size() - 1];
                    mid = mbti[0];
                    next = mbti[1];
                }
                for (int l = 0; l < 4; l++)
                {
                    if (pre[i] == mid[i])
                    {
                        dist++;
                    }
                    if (mid[i] == next[i])
                    {
                        dist++;
                    }
                    if (next[i] == pre[i])
                    {
                        dist++;
                    }
                }
                if (dist < mem)
                {
                    mem = dist;
                }
            }
        }
    }
}

int main()
{
    int N, a;
    string s;

    cin >> N;

    for (int i = 0; i < N; i++)
    {
        cin >> a;
        for (int i = 0; i < a; i++)
        {
            cin >> s;
            mbti.push_back(s);
        }
        MBTI();

        cout << mem << endl;
        mbti.clear();
        dist = 0;
        mem = 1000000;
    }
}

/*
세 사람을 고르는건데.....하 근데 그러면
*/