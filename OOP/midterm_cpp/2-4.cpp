#include <iostream>

using namespace std;

class CoffeeMachine
{
private:
    int coffee, water, sugar;

public:
    CoffeeMachine(int c, int w, int s) : coffee(c), water(w), sugar(s){};
    void drinkEspresso()
    {
        coffee--;
        water--;
    }
    void drinkAmericano()
    {
        coffee--;
        water -= 2;
    }
    void drinkSugarCoffee()
    {
        coffee--;
        water -= 2;
        sugar--;
    }
    void fill()
    {
        coffee = water = sugar = 10;
    }
    void show()
    {
        cout << "coffe machine state, coffee : " << coffee
             << ", water : " << water << ", sugar : " << sugar << endl;
    }
};

int main()
{
    CoffeeMachine java(5, 10, 3);
    java.drinkEspresso();
    java.show();
    java.drinkAmericano();
    java.show();

    java.drinkSugarCoffee();
    java.show();
    java.fill();
    java.show();
}