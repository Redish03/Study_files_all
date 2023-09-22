#include <iostream>

using namespace std;

class Seller
{
private:
    int itemCnt;
    const int itemPrice;
    int MyMoney;

public:
    // 초기화 리스트 기법 -> const 이용 시 초기화 가능
    Seller(int item, int price, int money) : itemCnt(item), itemPrice(price), MyMoney(money) {}
    int SaleItems(int money)
    {
        int num = money / itemPrice;
        MyMoney += money;
        itemCnt -= num;
        return num;
    }
    ~Seller()
    {
        cout << "Seller object destructor" << endl;
    }
    void showResult()
    {
        cout << "Seller's money: " << MyMoney << endl;
        cout << "Seller's item: " << itemCnt << endl;
    }
};

class Buyer
{
    int itemCnt, Mymoney;

public:
    Buyer(int item, int money)
    {
        itemCnt = item;
        Mymoney = money;
    }
    // void init(int item, int money)
    // {
    //     itemCnt = item;
    //     Mymoney = money;
    // }
    void BuyItems(Seller &s, int money)
    {
        itemCnt += s.SaleItems(money);
        Mymoney -= money;
    }
    ~Buyer()
    {
        cout << "Buyer object destructor" << endl;
    }
    void showResult()
    {
        cout << "Buyer's money : " << Mymoney << endl;
        cout << "Buyer's item : " << itemCnt << endl;
    }
};

int main()
{
    Seller seller(540, 10, 0);
    Buyer buyer(0, 1500);
    // seller.init(540, 10, 0);
    // buyer.init(0, 1500);

    int num;
    cout << "Payed money : ";
    cin >> num;
    buyer.BuyItems(seller, num);
    buyer.showResult();
    seller.showResult();

    return 0;
}