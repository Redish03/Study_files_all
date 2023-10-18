#include <iostream>
#include <string>
#include <sstream>

using namespace std;

class Date
{
public:
    Date(const std::string &dateStr)
    {
        parseDate(dateStr);
    }
    Date(int y, int m, int d) : year_(y), month_(m), day_(d){};

    void displayDate()
    {
        std::cout << "Year: " << year_ << ", Month: " << month_ << ", Day: " << day_ << std::endl;
    }
    int getMonth()
    {
        return month_;
    }
    int getYear()
    {
        return year_;
    }
    int getDay()
    {
        return day_;
    }

private:
    int year_;
    int month_;
    int day_;

    void parseDate(const std::string &dateStr)
    {
        std::istringstream ss(dateStr);
        char delimiter;
        ss >> year_ >> delimiter >> month_ >> delimiter >> day_;

        // 여기서 에러 처리를 추가하면 더 안전하게 구현할 수 있습니다.
        // 예를 들어, 날짜 형식이 잘못된 경우에 대한 처리를 추가할 수 있습니다.
    }
};

int main()
{
    Date date_1("1945/12/15");
    Date birth(2014, 3, 20);
    date_1.displayDate();
    cout << birth.getYear() << ", " << birth.getMonth() << ", " << birth.getDay();
    return 0;
}
