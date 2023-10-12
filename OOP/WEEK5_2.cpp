#include <iostream>
#include <cstring>

using namespace std;

class Test
{
private:
    int num;

public:
    Test(int n) : num(n) {}
    Test &add(int n)
    {
        num += n;
        return *this;
    }

    // const는 함수 오버로딩이 된다.
    void show()
    {
        cout << "not const function : " << num << endl;
    }
    void show() const
    {
        cout << "const function : " << num << endl;
    }
    // const를 붙이면 멤버 변수에 저장되어 있는 값을 변경시키지 않는것.
    void output() const
    {
        cout << num << endl;
    }
};

void overFun(const Test &t)
{
    t.show();
}

int main()
{
    // const Test test(10) 후 add를 실행하면 에러

    Test test(10);
    test.add(20);
    test.output();

    const Test test1(10);
    Test test2(20);
    test1.show();
    test2.show();

    overFun(test1);
    overFun(test2);
}