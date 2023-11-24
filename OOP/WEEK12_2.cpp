#include <iostream>

using namespace std;

template <typename T1, typename T2>
void showInfo(double n)
{
    cout << (T1)n << ", " << (T2)n << endl;
}

int main()
{
    showInfo<char, int>(65);
    showInfo<char, int>(97);
    showInfo<double, int>(65.6);
}