#include <iostream>

using namespace std;

class CCar {
    private:
        bool ONOFF;
        int price;
        int speed;

    public : 
    CCar(int p) : ONOFF(false), price(p), speed(0) {}
    void PrintSpeed() { cout << "current speed : " << speed << endl; }

    friend class CController; // friend 클래스 선언
};

class CController {
    private :
        int price;

    public : 
    CController(int p) : price(p){ }
    void TurnOn(CCar &car) { car.ONOFF = true; }
    void TurnOff(CCar &car) { car.ONOFF = false; }
    void SpeedChange(CCar &car, int v) { car.speed += v; }
};

int main()
{
    CCar MyCar(100);
    CController MyController(10);

    MyController.TurnOn(MyCar);
    MyController.SpeedChange(MyCar, 5);
    MyCar.PrintSpeed();
    MyController.TurnOff(MyCar);

    return 0;
}