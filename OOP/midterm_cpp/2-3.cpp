#include <iostream>

using namespace std;

class Account
{
private:
    string name;
    int acc_num, left_money;

public:
    Account(string str, int num, int money) : name(str), acc_num(num), left_money(money){};
    void deposit(int n)
    {
        left_money += n;
    }
    string getOwner()
    {
        return name;
    }
    int inquiry()
    {
        return left_money;
    }
    int withdraw(int n)
    {
        left_money -= n;
        return n;
    }
};

int main()
{
    Account a("Kitae", 1, 5000);
    a.deposit(50000);
    cout << a.getOwner() << "'s left money : " << a.inquiry() << endl;
    int money = a.withdraw(20000);
    cout << a.getOwner() << "'s left money : " << a.inquiry() << endl;
}