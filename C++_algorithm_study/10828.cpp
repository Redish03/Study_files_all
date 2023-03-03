#include <iostream>
#include <string>

using namespace std;

struct stack
{
    int arr[10000];
    int last;

    void init()
    {
        last = -1;
    }

    void push(int a)
    {
        arr[++last] = a;
    }

    int pop()
    {
        if(last == -1)
        {
            return -1;
        }
        return arr[last--]; 
    }

    int size()
    {
        return last + 1;
    }
    
    int empty()
    {
        if(last == -1)
        {
            return 1;
        }
        return 0;
    }

    int top()
    {
        if(last == -1)
        {
            return -1;
        }
        return arr[last];
    }
};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int N, num;
    string str;
    stack s;
    s.init();
    cin >> N;
    for (; N--;)
    {
        cin >> str;
        if(str == "push")
        {
            cin >> num;
            s.push(num);
        }
        if(str == "pop")
        {
            cout << s.pop() << "\n";
        }
        if(str == "size")
        {
            cout << s.size() << '\n';
        }
        if(str == "empty" )
        {
            cout << s.empty() << '\n';
        }
        if(str == "top")
        {
            cout << s.top() << '\n';
        }
    }
}