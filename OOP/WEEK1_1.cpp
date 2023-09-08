#include <iostream>

using namespace std;

namespace a_school
{
    void ft()
    {
        cout << "a_school space" << endl;
    }
}

namespace b_school
{
    void ft()
    {
        cout << "b_school space" << endl;
    }
}

using namespace a_school;

int main()
{
    ft();
}
