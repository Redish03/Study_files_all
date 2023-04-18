#include <iostream>
using namespace std;

class CCircle{
    public:
        class CPoint
        {
        private:
            int x;
            int y;

        public:
            CPoint(int a = 0, int b = 0) : x(a), y(b) { };
            void Move(int a, int b) { x += a; y += b; }
            void Print() { cout << "중심 : (" << x << ", " << y << ")" << endl; }
        };

    private:
        CPoint Center;
        double Radius;  

    public :
        CCircle(int a, int b, double r) : Radius(r) { Center.Move(a, b); }
        void Print()
        {
            Center.Print();
            cout << "반지름 : " << Radius << endl;
        }
};
/*
void CCircle::CPoint::Move(int a, int b) // 내포 클래스 멤버 함수의 외부정의
{
    x += a;
    y += b;
}

void CCircle::CPoint::Print()
{
    cout << "중심 : (" << x << ", " << y << ")" << endl;
}
*/
int main()
{
    CCircle cir(3, 4, 5);
    cir.Print();

    CCircle::CPoint P2(100, 200);  // 내포 클래스 객체 생성
    P2.Print();

    return 0;
}