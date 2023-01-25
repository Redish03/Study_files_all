#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> money) 
{
    int answer = 0;
    int Max = 0;
    int check[1000001] = {0};// i = 집의 money, value = 이전에 방문 체크

    for (int i = 0; i < money.size() - 1; i++)
    {
        if(check[i] == 1)
        {
            continue;
        }
        else
        {
            Max += money[i];
            check[i + 1] = 1;
        }
    }

    int check[1000001] = {0};
    check[0] = 1;
    for (int i = 0; i < money.size(); i++)
    {
        if(check[i] == 1)
        {
            continue;
        }
        else
        {
            answer += money[i];
            check[i + 1] = 1;
        }
    }

    answer = max(answer, Max);
    return answer;
}