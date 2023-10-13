#include <iostream>

using namespace std;

class List
{
private:
    int val;
    friend class Friendly;
};

class Friendly
{
public:
    void SetVal(List &list, int y)
    {
        list.val = y;
    }
};

int main()
{
    List lt;
    Friendly F;

    F.SetVal(lt, 10);
}

// 객체를 참조 형식으로 전달하는 것
//
// 생성자나 복사생성자의 생성 시점 (매개변수가 전달될때도 생성, return 될때도 발생) -> 객체 그자체가 매개변수로 전달되면 문제점 있다.
// 매개변수를 전달해야한다.
//
// 멤버 변수, 함수에 const를 붙여서 전송 할 때
// 함수 자체도 const화 시키는 것 -> 생성된 객체 안에 멤버의 변화를 주지 않겠다. const 함수에서는 const 변수만 불러서 호출 가능
//
// static도 마찬가지로, static이 붙어있을 때만 member 함수를 배울 수 있음.
// static은 전역 변수와 가깝고, 소멸이 아닌 값을 지속적으로 유지.
//