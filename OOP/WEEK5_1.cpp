#include <iostream>

using namespace std;

class ThisDef
{
    int num;

public:
    ThisDef(int n) : num(n) {}
    ThisDef &Add(int n)
    {
        num += n;
        return *this;
        // this가 가르키는 주소를 담는게 아닌 생성되는 객체 그 자신을 가르키게 된다.
    }
    ThisDef &ShowData()
    {
        cout << num << endl;
        return *this;
    }
};

int main()
{
    ThisDef ob(3);
    ThisDef &ref = ob.Add(2); // 함수가 왔지만 return 형이 포인터가 되고, ref는 클래스의 포인터를 가르키므로 ob와 ref는 같아지게 된다.
    ob.ShowData();
    ref.ShowData();

    ref.Add(1).ShowData().Add(3).ShowData();
    return 0;
}