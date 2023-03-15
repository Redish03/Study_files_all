#include <iostream>

using namespace std;

int N;

void dragon(int x, int y, int d, int g)
{
    if(d == 0) 
    {
        dragon(x + 1, y, d + 1, g);
    }
    else if(d == 1)
    {
        dragon(x, y + 1, d + 1, g);
    }
    else if(d == 2)
    {
        dragon(x - 1, y, d + 1, g);
    }
    else
    {
        dragon(x, y - 1, d + 1, g);
    }
}

int main()
{
    cin >> N;
    int x, y, d, g;
    for (int i = 0; i < N; i++)
    {
        cin >> x >> y >> d >> g;
        dragon(x, y, d, g);
    }
}