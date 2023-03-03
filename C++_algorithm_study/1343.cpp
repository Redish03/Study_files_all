#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    vector<char> answer;
    string s;

    cin >> s;
    int xcount = 0;
    s.push_back('.');

    for (int i = 0; i < s.length(); i++)
    {
        if(s[i] == 'X')
        {
            xcount++;
        }
        else if(s[i] == '.')
        {
            if(xcount % 2 == 1)
            {
                cout << -1;
                return 0;
            }
            else if(xcount % 4 == 0)
            {
                for (int j = 0; j < xcount; j++)
                {
                    answer.push_back('A');
                }
            }
            else
            {
                for (int j = 0; j < xcount / 4; j++)
                {
                    for (int k = 0; k < 4; k++)
                    {
                        answer.push_back('A');
                    }
                }
                answer.push_back('B');
                answer.push_back('B');
            }
            xcount = 0;
            answer.push_back('.');
        }
    }
    answer.pop_back();

    for (int i = 0; i < answer.size(); i++)
    {
        cout << answer[i];
    }
}