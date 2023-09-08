#include <iostream>
#include <string>

using namespace std;

class AirPlane // 비행기 이름, 승객 수, speed
{
private:
    int capacity, speed; // 승객 수와 빠르기
    string name;         // 비행기 이름

public:
    // 매개변수, 생성자, 설정자와 접근자 (getter setter)
    AirPlane()
    {
        name = "Busan Airline 007";
        capacity = 150;
        speed = 1000;
    }
    AirPlane(string n, int cap, int sp)
    {
        capacity = cap;
        speed = sp;
        name = n;
    }

    int getC() { return capacity; }
    int getS() { return speed; }
    string getN() { return name; }

    void print()
    {
        cout << "Airplane's name : " << getN() << endl;
        cout << "Airplane's max people : " << getC() << endl;
        cout << "Airplane's speed : " << getS() << endl;
    }
};

int main()
{
    AirPlane plane("Boing 707", 300, 1500);
    cout << "Airplane 1" << endl;
    plane.print();
    cout << endl;

    AirPlane plane2;
    cout << "Airplane 2" << endl;
    plane2.print();

    return 0;
}