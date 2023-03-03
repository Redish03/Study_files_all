#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int k, n;
string str;
vector<int> start;
vector<int> finish;
vector<vector<char>> graph;
vector<char> result;
int fault = 0;
int main()
{
    cin >> k >> n;
    start.resize(k, 0);
    finish.resize(k, 0);
    graph.resize(n, vector<char>(k, 0));
    cin >> str;
    for (int i = 0; i < k; i++) // 알파벳을 int형으로 바꾸기
    {
        start[i] = 'A' + i;
        finish[i] = str[i];
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < k - 1; j++)
        {
            cin >> graph[i][j];
            if (graph[i][j] == '?')
            {
                fault = i;
            }
        }
    }
    for (int i = 0; i < fault; i++) 
    {
        for (int j = 0; j < k - 1; j++)
        {
            if (graph[i][j] == '-')
            {
                swap(start[j], start[j + 1]);
            }
        }
    }
    for (int i = n - 1; i >= fault + 1; i--) 
    {
        for (int j = 0; j < k - 1; j++)
        {
            if (graph[i][j] == '-')
            {
                swap(finish[j], finish[j + 1]);
            }
        }
    }
    for (int i = 0; i < k - 1; i++)
    {
        if (start[i] == finish[i]) 
        {
            result.push_back('*');
        }
        else if (start[i] == finish[i + 1] && start[i + 1] == finish[i]) 
        {
            swap(start[i], start[i + 1]);
            result.push_back('-');
        }
        else 
        {
            result.assign(0, 0);
            for (int j = 0; j < k - 1; j++)
            {
                result.push_back('x');
            }
        }
    }
    for (int i = 0; i < k - 1; i++)
    {
        cout << result[i];
    }
}