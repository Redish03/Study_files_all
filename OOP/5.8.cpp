#include <iostream>
using namespace std;

class CShape
{
private:
    int type;
    int len; //��. Ȥ�� ������
    double const PI;
    static int rectCount;
    static int circCount;

public:
    CShape():PI(3.14)//�����͸� ���� ������
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
            cout << "�߸��� Ÿ���� �Է��Ͽ����ϴ�" << endl;
        }
    }
};
int CShape::rectCount = 0;
int CShape::circCount = 0;

int main(void)
{
    CShape S1(1, 5); //���簢��
    CShape S2(2, 5); //��
    CShape *pRect = new CShape[3]; //����Ʈ�� ���簢��

    cout << "�簢�� ����: " << CShape::GetRectCount() << endl;
    cout << "�� ����: " << CShape::GetCircleCount() << endl;
    cout << "S1�� ����: " << S1.GetArea() << endl;

    delete[]pRect;

    cout << "�簢�� ����:" << CShape::GetRectCount() << endl;
    cout << "�� ����: " << CShape::GetCircleCount() << endl;
    cout << "S2�� ����: " << S2.GetArea() << endl;;
    return 0;
}

 