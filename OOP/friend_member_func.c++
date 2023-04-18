#include <iostream>

using namespace std;

class CController 
{
    private :
        int price;
    
    public : 
        CController (int p): price(p) {}
        void TurnOn(CCar &car) { car.OnOff = true; }
        void TurnOff(CCar &car) { car.OnOff = false; }
        void SpeedChange(CCar &car, int v) { car.speed += v; }

        friend void CCar :: SetPrice(CController &controller, int p)
}

int main()
{

}