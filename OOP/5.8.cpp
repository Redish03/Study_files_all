#include <iostream>
using namespace std;

class CShape
{
private:
    int type;
    int len; //변. 혹은 반지름
    double const PI;
    static int rectCount;
    static int circCount;

public:
    CShape():PI(3.14)//포인터를 위한 생성자
    {
        rectCount++;
    }
    CShape(int t, int num) :type(t), len(num), PI(3.14)
    {
        if (t == 1)
            rectCount++;
        else if (t == 2)
            circCount++;
    }
    ~CShape()
    {
        rectCount--;
    }
    static int GetRectCount()
    {
        return rectCount;
    }
    static int GetCircleCount()
    {
        return circCount;
    }
    double GetArea()
    {
        int t = type;
        if (t == 1)
        {
            return (len*len);
        }
        else if (t == 2)
        {
            return (PI*len*len);
        }
        else
        {
            cout << "잘못된 타입을 입력하였습니다" << endl;
        }
    }
};
int CShape::rectCount = 0;
int CShape::circCount = 0;

int main(void)
{
    CShape S1(1, 5); //정사각형
    CShape S2(2, 5); //원
    CShape *pRect = new CShape[3]; //디폴트로 정사각형

    cout << "사각형 개수: " << CShape::GetRectCount() << endl;
    cout << "원 개수: " << CShape::GetCircleCount() << endl;
    cout << "S1의 면적: " << S1.GetArea() << endl;

    delete[]pRect;

    cout << "사각형 개수:" << CShape::GetRectCount() << endl;
    cout << "원 개수: " << CShape::GetCircleCount() << endl;
    cout << "S2의 면적: " << S2.GetArea() << endl;;
    return 0;
}

 