#include <iostream>

using namespace std;

class Tower
{
private:
    int height;

public:
    Tower() : height(1){};
    Tower(int n) : height(n){};
    int getHeight()
    {
        return height;
    }
};

int main()
{
    Tower myTower;
    Tower seoulTower(100);
    cout << "The height is " << myTower.getHeight() << "m" << endl;
    cout << "The height is " << seoulTower.getHeight() << "m" << endl;
}