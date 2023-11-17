#include <iostream>

using namespace std;

string S, T;
string reverse_S;
bool ST_same = true;
bool reverseST_same = true;
int answer = 0;

string setting_reverse(string str)
{
    string reverse;
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == 'A')
        {
            reverse += "B";
        }
        if (str[i] == 'B')
        {
            reverse += "A";
        }
    }

    return reverse;
}

void check_difference()
{
    for (int i = 0; i < S.length(); i++)
    {
        if (S[i] != T[i])
        {
            ST_same = false;
        }
        if (reverse_S[i] != T[i])
        {
            reverseST_same = false;
        }
    }
}

bool ST_same_case()
{
    for (int j = S.length() - 1; j < T.length(); j++)
    {
        if (T[j] == 'B')
        {
            return false;
        }
    }
    return true;
}

int main()
{
    cin >> S >> T;

    reverse_S = setting_reverse(S);
    check_difference();

    if (!ST_same && !reverseST_same)
    {
        cout << answer;
        return 0;
    }

    if (ST_same)
    {
        if (!ST_same_case())
        {
            answer = 0;
        }
        else
        {
            answer = 1;
        }
        cout << answer;
        return 0;
    }

    S = reverse_S;

    for (int i = S.length() - 1; i < T.length(); i++)
    {
        check_difference();
        if (reverseST_same)
        {
            for (int j = S.length() - 1; j < T.length(); j++)
            {
                if (T[j] == 'B')
                {
                    S += "A";
                }
                else if (T[j] == 'A')
                {
                    reverse_S = S;
                    S = setting_reverse(S);
                    if (!ST_same_case())
                    {
                        answer = 0;
                        cout << answer;
                        return 0;
                    }
                }
            }
        }
    }

    cout << answer;
}