#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int x, y, w, h;
    cin >> x >> y >> w >> h;

    cout << min(w - x, min(x, min(y, h - y)));
}