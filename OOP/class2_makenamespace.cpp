#include <iostream>

using namespace std;

namespace Microsoft 
{
    int g_Mvar;
    int Plus(int x, int y)
    {
        return (x + y);
    }

    int Minus(int x, int y)
    {
        return (x - y);
    }
}
// namespace 안에는 변수, 함수들이 들어갈 수 있음.

namespace Samsung 
{
    int g_Svar;
    int Plus(int x, int y)
    {
        return (x + y);
    }
    int Minus(int x, int y);
    // namespace 안에서 함수를 정의함.
}

int Samsung::Minus(int x, int y) 
{
    return (x - y); 
    // namespace 밖에서 함수를 정의 할때, "::" 을 붙여야 함.
}

int main()
{
    Microsoft::g_Mvar = Microsoft::Minus(5, 2);
    cout << Microsoft::g_Mvar << endl;

    return 0;
}