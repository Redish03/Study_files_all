#include <iostream>
#include <vector>

using namespace std;

vector<vector<int>> triangle;
int solution()
{
    int answer = 0;
    int arr[501][501] = {0};
    int sum = 0;

    int N = triangle.size();
    int M = triangle[0].size();
    arr[0][0] = triangle[0][0];
    for (int i = 1; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            if(j == 0)
            {
                arr[i][j] = triangle[i][j] + arr[i - 1][j];
            }
            else if(j == M-1)
            {
                arr[i][j] = triangle[i][j] + arr[i - 1][j - 1];
            }
            else
            {
                arr[i][j] = max(arr[i - 1][j - 1], arr[i - 1][j]) + triangle[i][j];
            }

            if(arr[i][j] > answer)
            {
                answer = arr[i][j];
            }
        }
    }
   
    return answer;
}
// 7, 3, 8 각각의 arr에 메모리제이션 기법을 사용한다.
// 7은 기본 값, 그리고 3과 8의 arr에는 각각 최대의 합을 넣어준다. 

int main()
{
    solution();
}