#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int a, b, c;
    while(true)
    {
        cin >> a >> b >> c;
        if(a == 0 && b == 0 && c == 0)
        {
            break;
        }
        else if(max(a, max(b, c)) >= max(min(a, c), min(b, c)) + min(a, min(b, c)))
        {
            cout << "Invalid";
        }
        else if(a == b && b == c)
        {
            cout << "Equilateral";
            continue;
        }
        else if(a == b || c == a || b == c)
        {
            cout << "Isosceles";
            continue;
        }
        else
        {
            cout << "Scalene";
        }
    }
}