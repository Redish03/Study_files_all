#include <iostream>
#include <cstring>

using namespace std;

class First
{
private:
    char *stOne;

public:
    First(const char *st)
    {
        stOne = new char[strlen(st) + 1];
    }
    virtual ~First()
    {
        cout << "First �Ҹ���" << endl;
        delete[] stOne;
    }
};

class Second : public First
{
private:
    char *stTwo;

public:
    Second(const char *st1, const char *st2) : First(st1)
    {
        stTwo = new char[strlen(st2) + 1];
    }
    ~Second()
    {
        cout << "Second �Ҹ���" << endl;
        delete[] stTwo;
    }
};

int main()
{
    First *f = new Second("Hello", "World");
    delete f;

    return 0;
}