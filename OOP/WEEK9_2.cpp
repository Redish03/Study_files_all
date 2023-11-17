#include <iostream>
#include <cstring>

using namespace std;

class Gun
{
private:
    int bullet_count;

public:
    Gun(int number) : bullet_count(number){};
    gunFire()
    {
        bullet_count--;
        cout << "Gun Fired." << endl;
    }
};

class police
{
private:
    int handcuff;
    Gun gun();

public:
    police(int num) : handcuff(num){};

    void capturing()
    {
        handcuff--;
    }
};

int main()
{
}