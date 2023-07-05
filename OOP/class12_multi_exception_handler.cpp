#include <iostream>

using namespace std;

int main()
{
    int x, y;

    cout << "2개의 정수 입력 : ";
    cin >> x >> y;

    try
    {
        if (y == 0)
        {
            throw 1;
        }
        if (x <= 0 || y <= 0)
        {
            throw 1.0;
        }
        cout << "+ : " << x + y << endl;
        cout << "- : " << x - y << endl;
        cout << "* : " << x * y << endl;
        cout << "/ : " << x / y << endl;
    }
    catch (int a) // 예외 처리 핸들러 : int형
    {
        cout << "0으로 나눌수는 없습니다." << endl;
    }
    catch (double a) // 예외 처리 핸들러: double형
    {
        cout << "x와 y는 음수가 될 수 없습니다." << endl;
    }
    catch (...) // 예외 처리 핸들러 : 모든 타입
    {
        cout << "모든 throw문을 수용 할 수 있는 예외처리 핸들러입니다." << endl;
    }

    cout << "사칙연산 종료" << endl;

    return 0;
}