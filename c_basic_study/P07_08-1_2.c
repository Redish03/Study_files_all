#include <stdio.h>

int sum = 0;

float current_avg(int count)
{
    static float aver;
    aver = (float)sum / (float)count;
    return aver;
}

int main()
{
    int num;
    int cnt = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    while(num > 0)
    {
        sum += num;
        cnt++;
        float average = current_avg(cnt);
        printf("Current average is %f.\n", average);
        printf("Enter a number: ");
        scanf("%d", &num);
    }
}