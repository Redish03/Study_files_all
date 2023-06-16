#include <iostream>

using namespace std;

template <typename T, bool x>

T MaxMin(T a, T b)
{
    if (x == true)
        return ((a > b) ? a : b);
    else
        return ((a < b) ? a : b);
}

int main()
{
    cout << "ÃÖ´ñ°ª : " << MaxMin<int, true>(3, 4) << endl;
    cout << "ÃÖ¼Ú°ª : " << MaxMin<int, false>(3, 4) << endl;

    return 0;
}