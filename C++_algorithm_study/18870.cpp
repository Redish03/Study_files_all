#include <iostream>
#include <vector>
#include <set>

using namespace std;

int N;
vector<int> v;
vector<int> answer_vec(1000001, 0);
set<int> s;

void calc(int start)
{
    for (int i = 0; i < N; i++)
    {
        if (i == start)
            continue;

        if (v[start] > v[i])
        {
            answer_vec[start]++;
        }
    }
}

int main()
{
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        int a;
        cin >> a;
        v.push_back(a);
    }

    for (int i = 0; i < N; i++)
    {
        calc(i);
        cout << answer_vec[i] << " ";
    }
}