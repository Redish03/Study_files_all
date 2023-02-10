#include <iostream>
#include <stack>
#include <string>

using namespace std;

stack<char> st;
void print(stack<char> s)
{
    while(!s.empty())
    {
        cout << s.top();
        s.pop();
    }

}
int main()
{
    string S;
    getline(cin, S);

    bool check = false;

    for (char line : S)
    {
        if(line == '<')
        {
            print(st);
            check = true;
            cout << line;
        }
        else if(line == '>')
        {
            check = false;
            cout << line;
        }
        else if(check)
        {
            cout << line;
        }
        else
        {
            if(line == ' ')
            {
                print(st);
                cout << line;
            }
            else
            {
                st.push(line);
            }
        }
    }
    print(st);
    cout << '\n';
}