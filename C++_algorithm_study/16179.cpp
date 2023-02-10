#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;
bool visited[100];

int main()
{
    string Str;
    cin >> Str;

    for (int i = 0; i < Str.length(); i++)
    {
        vector<pair<string, int>> v;
        for (int j = 0; j < Str.length(); j++)
        {
            if(!visited[j])
            {
                string s;
                for (int k = 0; k < Str.length(); k++)
                {
                    if(k == j || visited[k])
                    {
                      s += Str[k];
                    }
                }
                v.push_back({s, j});
            }
        }
        sort(v.begin(), v.end());
        cout << v[0].first << '\n';
        visited[v[0].second] = true;
    }
}