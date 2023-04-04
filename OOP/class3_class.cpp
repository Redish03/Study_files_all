#include <iostream>

using namespace std;

class Car 
{
    int m_color;
    int m_CC;
    int m_speed;

    void Accelerate()
    {
        m_speed++;
    }
    void Stop() { }
    void TurnOn() { }
};

int main()
{
    Car Mycar1, Mycar2;
    Mycar1.m_speed = 0;
    Mycar2.m_CC = 1000;
    Mycar1.Accelerate();

    return 0;
}