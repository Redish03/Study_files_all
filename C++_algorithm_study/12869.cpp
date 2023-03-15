#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>

using namespace std;

int N;
vector<int> arr;
vector<int> HP;

int dp(int first, int second, int third, int count)
{
    int a;
    if(first <= 0 && second <= 0 && third <= 0)
    {
        return count;
    }
    else if(first <= 0 && second <= 0 || second <= 0 && third <= 0 || first <= 0 && third <= 0)
    {
        sort(HP.begin(), HP.end() - 1);
        a = dp(HP[0], HP[1], HP[2] - 9, count + 1);
    }
    else if(first <= 0 || second <= 0||third <= 0)
    {
        sort(HP.begin(), HP.end() - 1);
        a = dp(HP[0], HP[1] - 3, HP[2] - 9, count + 1);
    }
    else
    {

    }
    return a;
}

int main()
{
    cin >> N;
    
    for (int i = 0; i < N; i++)
    {
        int a;
        cin >> a;
        HP.push_back(a);
    }

    int answer = 0;
    if(N == 1)
    {
        HP.push_back(0);
        HP.push_back(0);
    }
    else if(N == 2)
    {
        HP.push_back(0);
    }
/*
    for (int i = 0; i < HP.size(); i++)
    {
        cout << HP[i] << " ";
    }
*/
    answer = dp(HP[0], HP[1], HP[2], 0);
    cout << answer;
}