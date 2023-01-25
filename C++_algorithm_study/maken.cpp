#include <iostream>
#include <algorithm>

using namespace std;

int solution(int N, int number)
{
    for (int i = 0; i < 7; i++)
    {
        int res = N;
        for (int j = 1; j < i; j++)
        {
            res = res * 10 + N;
        }
        for (int j = 0; j < i; i++)
        {
            for (int k = 0; k < i; i++)
            {
                if (j + k + 1 != i)
                {
                    continue; 
                }
                
            }
        }
    }
}