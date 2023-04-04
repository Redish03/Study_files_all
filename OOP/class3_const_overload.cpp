#include <iostream>

using namespace std;

class point
{
    private:
        int x;
        int y;


    public:
        point(int a, int b) { x = a; y = b; } // 생성자! 두개의 파라미터를 가지고 생성자가 호출되도록 지정해줘야 함.
        point(int a) { x = a; y = 0; }
        void print() { cout << "(" << x << ", " << y << ")" << endl; }
};

int main()
{
		point p1 = point(3, 4);
		point p2(5, 6);
		// 둘다 객체를 생성, 첫번째는 대입이 아님. 주로 두번째 스타일 사용
        point p3 = 6;
        // 6 -> point(6)을 반환함. 변환시 생성자 2 사용, 묵시적인 형변환 가능.

        p1.print();
		p2.print();
        p3.print();
}