#include <iostream>
#include <vector>
#include <string>
#include <deque>
#include <algorithm>

using namespace std;

vector<int> people;
deque<int> dq;
int limit;

bool compare (int a, int b)
{
    return a > b;
}

int main()
{
    for(int i = 0; i < 4; i++)
    {
        int a;
        cin >> a;
        people.push_back(a);
    }

    sort(people.begin(), people.end(), compare);

    for(int i = 0; i < people.size(); i++)
    {
        dq.push_back(people[i]);
    }

    int sol = 0;

    while(!dq.empty())
    {
        int first = dq.front();
        sol++;
        dq.pop_front();
        if(!dq.empty() && (first + dq.back() <= limit))
        {
            dq.pop_back();
        }    
        cout << v1 << "\n";
    }
    cout << sol;
    return sol;
}


