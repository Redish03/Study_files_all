#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(int m, int n, vector<vector<int>> puddles)
{
    int answer = 0;
    int map[100][100] = {-1};
    for(int i = 0; i < puddles.size(); ++i)
    {
        road[puddles[i][0]-1][puddles[i][1]-1] = 0;
    }

    map[0][0] = 1;

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if(map[i][j] == 0)
            {
                if(i == 0 && j == 0) continue;
                if(i = 0)
                {
                    map[i][j] = map[i][j - 1];
                }
                else if(j = 0) 
                {
                    map[i][j] = map[i - 1][j];
                }
                else
                {
                    map[i][j] = map[i][j - 1] + map[i - 1][j];
                }
            }
        }
    }

    answer = map[m - 1][n - 1] % 1000000007;
    return answer;
}

int main()
{
    solution(4, 3, );
}