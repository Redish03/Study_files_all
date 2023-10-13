#include <iostream>

using namespace std;

class List
{
private:
    int val;
    friend class Friendly;
};

class Friendly
{
public:
    void SetVal(List &list, int y)
    {
        list.val = y;
    }
};

int main()
{
    List lt;
    Friendly F;

    F.SetVal(lt, 10);
}