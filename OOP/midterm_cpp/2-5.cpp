#include <iostream>
#include <string>

using namespace std;

class Integer
{
private:
    int number;

public:
    Integer(int n) : number(n){};
    Integer(string str)
    {
        number = stoi(str);
    }

    void set(int n)
    {
        number = n;
    }
    int get()
    {
        return number;
    }
    int isEven()
    {
        if (number % 2 == 0)
            return 1;
        else
            return 0;
    }
};

int main()
{
    Integer n(30);
    cout << n.get() << " ";

    n.set(50);
    cout << n.get() << " ";

    Integer m("300");
    cout << m.get() << ' ';
    cout << m.isEven();
}