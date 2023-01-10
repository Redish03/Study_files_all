#include <iostream>
#include <vector>

using namespace std;

int main() 
{
    vector<int> lost;
    vector<int> reserve;
    lost.push_back(2);
    lost.push_back(4);
    reserve.push_back(3);
    int n = 5;
    vector<int> v;
    
    for(int i = 0; i <= n; i++)
    {
        for (int j = 0; j < lost.size(); j++)
        {
            if(i == lost[j])
            {
                v[i - 1] == 0;
            }
            else
            {
                v[i - 1] == 1;
            }
        }
        for (int j = 0; j < reserve.size(); j++)
        {
            if(i == reserve[j])
            {
                v[i - 1] == 2;
            }
            
            
        }

        if(i == lost[i] == reserve[i])
            {
                v[i] == 1;
            }
            cout << v[i] << "\n";
        
    }
    
    int answer = 0;

    for (int i = 0; i < v.size(); i++)
    {
        if(v[i] == 0)
        {
            if(v[i - 1] == 2)
            {
                v[i] = 1;
                v[i + 1] = 1;
            }
            else if(v[i + 1] == 2)
            {
                v[i] = 2;
            }
        }
        if(v[i] == 1)
        {
            answer++;
        }
    }
    cout << answer;
    return answer;
}
/*
int main()
{
    vector<int> vec;
    vector<int> vec2;
    solution(5, vec, vec2);
}
*/
