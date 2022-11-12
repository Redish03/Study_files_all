#include <iostream>
#include <vector>
#include <string>

using namespace std;
#define MAX 1000000

int N;
string startstr, endstr;

int cal(bool b, int y)
{
    int count = 0;
    vector<int> ini;
    vector<int> fin;

    for (int i = 0; i < startstr.length(); i++)
    {
        ini.push_back(startstr[i] - '0');
        fin.push_back(endstr[i] - '0');
    }

    if (b)
    {
        count = y;
        ini[2] = (y == 2) ? ((ini[2] == 1) ? 0 : 1) : ini[2];
        /*
        삼항 연산자 : (num1 == 10)? 100 : 200;에서
        num1 == 10은 조건식이 되고
        100은 true일때 사용값, 200은 거짓일 때 사용할 값이다.
        */
    }
    else
    {
        count = 1;
        ini[0] = (ini[0] == 1) ? 0 : 1;
        ini[1] = (ini[1] == 1) ? 0 : 1;
        if (y == 3)
        {
            ini[2] = (ini[2] == 1) ? 0 : 1;
        }
    }
    for (int i = 1; i < ini.size(); i++)
    {
        if (ini[i] != fin[i] && i + 1 < N)
        {
            count++;
            for (int j = 0; j <= 2; j++)
            {
                if (i + j < N)
                {
                    ini[i + j] = (ini[i + j] == 1) ? 0 : 1;
                }
            }
        }
    }
    for (int i = 1; i < ini.size(); i++)
    {
        if (ini[i] != fin[i])
            return MAX;
    }
    return count;
}

/* 전구가 결과 상태와 같아 질 수 있는지, 횟수를 세어줌
bool형 : 1번 전구가 같은가?
 int형 : 각각의 케이스 구분
y = 0 -> 1번 2번 둘다 안누름
y = 1 -> 1번 O, 2번 X
y = 2 -> 1번 2번 둘다 누름
y = 3 -> 1번 X, 2번 O
*/

int det()
{
    int value = MAX;
    if (startstr == endstr)
        return 0;
    if (startstr[0] == endstr[0])
    {
        value = min(cal(true, 0), cal(true, 2));
    }
    else
    {
        value = min(cal(false, 1), cal(false, 3));
    }

    return value;
}
/* startstr과 endstr를 입력 받음.
det -> 두 상태가 같다면 바로 0을 반환하고, Cal 로 넘어가 둘중 작은 값 반환

*/

int main()
{
    cin.tie(0);
    cout.tie(0);
    ios::sync_with_stdio(false);

    int result;
    cin >> N;
    cin >> startstr >> endstr;

    result = det();
    int ans = (result >= MAX) ? -1 : result;
    cout << ans;
}