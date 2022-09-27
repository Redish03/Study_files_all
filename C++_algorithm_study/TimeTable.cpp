#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int main()
{
    int N;
    cin >> N ;

    queue<int> q;
    vector<pair<int, int>> v;

    for(int i = 0; i < N; i++)
    {
        int a, b;
        cin >> a >> b;
        v.push_back(make_pair(a, b));
        q.push_back(a);
    }

    while (!q.empty())
    {

    }

}