#include <stdio.h>

int main()
{
    int N, M;
    int arr[101];
    int answer = 0;
    scanf("%d %d", &N, &M);
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < N; i++)
    {
        for (int j = i + 1; j < N; j++)
        {
            for (int k = j + 1; k < N; k++)
            {
                int sum = arr[i] + arr[j] + arr[k];
                if(sum > answer && M >= sum)
                {
                    answer = sum;
                }
            }
        }
    }
    printf("%d", answer);
}