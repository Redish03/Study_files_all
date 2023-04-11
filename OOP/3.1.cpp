#include <iostream>

using namespace std;

/*
#define Abs(X) (X>0?X:-X) //매크로
*/

inline int Abs(int X)
{
    if (X > 0)
        return X;
    else
       return -X;
}

int main(void)
{
    cout << "결과:" << Abs((-2 + 4)) << endl;
    return 0;
}