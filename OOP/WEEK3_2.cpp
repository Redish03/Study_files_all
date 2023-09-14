#include <iostream>

using namespace std;

class Seller
{
private:
    int itemCnt, itemPrice, MyMoney;

public:
    void init(int item, int price, int money)
    {
        itemCnt = item;
        itemPrice = price;
        MyMoney = money;
    }
    int SaleItems(int money)
    {
        int num = money / itemPrice;
        MyMoney += money;
        itemCnt -= num;
        return num;
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
    void init(int item, int money)
    {
        itemCnt = item;
        Mymoney = money;
    }
    void BuyItems(Seller &s, int money)
    {
        itemCnt += s.SaleItems(money);
        Mymoney -= money;
    }
    void showResult()
    {
        cout << "Buyer's money : " << Mymoney << endl;
        cout << "Buyer's item : " << itemCnt << endl;
    }
};

int main()
{
    Seller seller;
    Buyer buyer;
    seller.init(540, 10, 0);
    buyer.init(0, 1500);

    int num;
    cout << "Payed money : ";
    cin >> num;
    buyer.BuyItems(seller, num);
    buyer.showResult();
    seller.showResult();

    return 0;
}