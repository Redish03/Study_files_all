#include <iostream>

using namespace std;

int main()
{
    int N, M;
    cin >> N >> M;

    char arr [1001][51];
    int HamDis = 0;
    int flag[4] = {'A', 'C', 'G', 'T'} ;
    int a = 0, c = 0, g = 0, t = 0;
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < N; j++)
        {
            for(int k = 0; k < M; k++)
            {
                if(flag[i] == arr[j][k])
                {
                    



                }
            }
        }
    }
}