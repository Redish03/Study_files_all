#include <iostream>
#include <string>

using namespace std;

class Date{
    private:
    int year;
    int month;
    int day;

public:
    Date(int a, int b, int c)
    { 
        year = a;
        month = b;
        day = c;
    }
    Date(string str)
    {
        year = stoi(str.substr(0, 4));
        month = stoi(str.substr(5, 1));
        day = stoi(str.substr(7, 2));
    }
    void show()
    {
        cout << year << "³â" << month << "¿ù" << day << "ÀÏ"<< endl;
    }
    int getYear()
    {
        return year;
    }
    int getMonth()
    {
        return month;
    }
    int getDay()
    {
        return day;
    }

};

int main()
{
    Date birth(2014, 3, 20);
    Date independenceDay("1945/8/15");

    independenceDay.show();
    cout << birth.getYear() << ',' << birth.getMonth() << "," << birth.getDay() << endl;
}