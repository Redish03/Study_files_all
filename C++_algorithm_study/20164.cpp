#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int Min = 999999;
int Max = 0;
int n;

int check_odd(string s)
{
    int count = 0;
    for (int i = 0; i < s.length(); ++i)
    {
        if((s[i] - '0') % 2 == 1)
        {
            count++;
        }
        
    }
    return count;
}

void odd(string s, int total)
{
    if(s.length == 1)
    {
        total += check_odd(s);
        Min = min(Min, total + check_odd(n));
        Max = max(Max, total + check_odd(n));
    }
    else if(s.length() == 2)
    {
        
    }
}

int main()
{
    cin >> n;
    cout << Min;
}