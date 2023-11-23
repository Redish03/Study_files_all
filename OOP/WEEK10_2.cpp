#include <iostream>
#include <cstring>

using namespace std;

class First
{
public:
    void FirstFunc()
    {
        cout << "FirstFunc()" << endl;
    }
    virtual void func()
    {
        cout << "First's func()" << endl;
    }
};

class Second : public First
{
public:
    void SecondFunc()
    {
        cout << "SecondFunc()" << endl;
    }
    virtual void func()
    {
        cout << "Second's func()" << endl;
    }
};

class Third : public Second
{
public:
    void ThirdFunc()
    {
        cout << "ThirdFunc()" << endl;
    }
    virtual void func()
    {
        cout << "Third's func()" << endl;
    }
};

int main()
{
    Third third;
    third.FirstFunc();
    third.SecondFunc();
    third.ThirdFunc();
    third.func();
    cout << "================" << endl;

    Second second;
    second.FirstFunc();
    second.SecondFunc();
    second.func();
    cout << "================" << endl;

    First &fi = third;
    fi.FirstFunc();
    fi.func();

    return 0;
}