#include <iostream>

using namespace std;

class Person
{
    string name;

public:
    Person(string name) { this->name = name; }
    string getName()
    {
        return name;
    }
};

class Family
{
    Person *p;
    int size;

public:
    Family(string name, int size){
        
    };
    void show();
    ~Family(){};
};

int main()
{
    Family *simpson = new Family("simpson", 3);
    simpson->s
}