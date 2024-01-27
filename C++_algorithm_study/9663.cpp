// 테스트 케이스 통과

#include <iostream>
#include <cmath>

using namespace std;

int N;
int cols[16];
int count = 0;

bool promising(int level)
{
    for (int i = 1; i < level; i++)
    {
        if (cols[i] == cols[level])
        {
            return false;
        }
        else if (level - i == abs(cols[level] - cols[i]))
        {
            return false;
        }
    }
    return true;
}

void queens(int level)
{
    if (!promising(level))
    {
        return;
    }
    else if (level == N)
    {
        count++;

        return;
    }
    for (int i = 1; i <= N; i++)
    {
        cols[level + 1] = i;
        queens(level + 1);
    }
}

int main()
{
    cin >> N;
    queens(0);
    cout << count << endl;
}
