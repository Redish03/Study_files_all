#include <iostream>
#include <cstring>

using namespace std;

class Account{
    private:
        string name;
        int num;
        int money;

    public:
        Account(string str, int idx, int left) {
            name = str;
            num = idx;
            money = left;
        }
        void deposite(int plus) { money += plus; }
        string getowner() { return name; }
        int inquiry() { return money; }
        int withdraw(int minus) {
            money -= minus;
            return money;
        }
};

int main()
{
    Account a("Kitae", 1, 5000);
    a.deposite(50000);
    cout << a.getowner() << "ÀÇ ÀÜ¾×Àº" << a.inquiry() << endl;
    int money = a.withdraw(20000);
    cout << a.getowner() << "ÀÇ ÀÜ¾×Àº" << a.inquiry() << endl;
}