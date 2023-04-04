#include <iostream>

using namespace std;

class Cpoint
{
private:
	int count;
	int *x;

public:
	Cpoint (int a) { count = a; x = new int[count]; } // 생성자
    void Delete() { delete[] x; } // 메모리 해제
    void print() 
    {
        for (int i = 0; i < count; i++)
        {
            cout << x[i] << endl;
        }
    }
};

int main()
{
    Cpoint arr(5);
    arr.print();
    arr.Delete();

    return 0;
}