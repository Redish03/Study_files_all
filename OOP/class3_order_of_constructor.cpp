#include <iostream>

using namespace std;

class Cpoint{
private:
	int x;
	int y;

public:
	Cpoint (int a, int b) 
    {
        x = a; 
        y = b;
        cout << "생성자 : ";
        print();
    } // 생성자
	~Cpoint()
    {
        cout << "소멸자 : ";
        print();
    } // 소멸자
	void print() { cout << "(" << x << ", " << y << ")" << endl; }
};

