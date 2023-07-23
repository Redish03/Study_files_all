#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <algorithm>

using namespace std;

vector<string> answer;

int main()
{
    cin.tie(NULL);
    cout.tie(NULL);
    ios::sync_with_stdio(false);

    int N, M;
    cin >> N >> M;
    int count = 0;
    map<string, bool> list;

    for (int i = 0; i < N; i++)
    {
        string s;
        cin >> s;
        list.insert(make_pair(s, true));
        // 듣도 못한사람
    }
    for (int i = 0; i < M; i++)
    {
        string s;
        cin >> s;
        if (list[s])
        {
            answer.push_back(s);
            count++;
        }
    }

    cout << count << endl;
    sort(answer.begin(), answer.end());
    for (int i = 0; i < answer.size(); i++)
    {
        cout << answer[i] << endl;
    }
}