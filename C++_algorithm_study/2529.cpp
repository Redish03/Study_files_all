#include <iostream>
#include <vector>

using namespace std;

int k;
vector<char> command;
string ans;

bool ok(int x, int y, char op)
{
    if (op == '<')
    {
        if (x > y)
            return false;
    }
    if (op == '>')
    {
        if (x < y)
            return false;
    }
    return true;
}

void recul(int start, int prev, int idx)
{
    if (idx == k + 1)
    {
        ans += prev;
        cout << ans;
        return;
    }

    for (int i = 0; i < 10; i++)
    {
        if (ans.find(i))
        {
            continue;
        }
        if (idx == 0 || ok(command[idx - 1]))
    }
}
int main()
{
    cin >> k;

    for (int i = 0; i < k; i++)
    {
        char ch;
        cin >> ch;
        command.push_back(ch);
    }

    recul(0, -1, 0);
}
