#include <iostream>

using namespace std;

class Person
{
private:
    int money;
    static int SharedMoney;

public:
    void addMoney(int money)
    {
        this->money += money;
    }
    Person(int n) : money(n){};
    // 함수에 static이 붙으면, static 변수에 대해서만 호출 가능
    static void ChangeShared()
    {
    }
    static void addShared(int n)
    {
        SharedMoney += n;
    }
    int getMoney()
    {
        return money;
    }
    int getShared()
    {
        return SharedMoney;
    }

    static void setShared(int n)
    {
        SharedMoney = n;
    }
};

void Person::SharedMoney = 10;

int main()
{
    // 보통의 멤버처럼 접근 가능
    // 객체.static멤버변수
    // 객체포인터 -> static 멤버

    Person han(100);
    han.setShared(200);
    han.

        Person lee(150);
    lee.addMoney(200);
    lee.addShared(200);

    cout << han.getMoney() << " " << lee.getMoney() << endl;
    cout << han.getShared() << " " << lee.getShared() << endl;
}