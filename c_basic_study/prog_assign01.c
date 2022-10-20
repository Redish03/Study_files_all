#include<stdio.h>

int main()
{
   float x, sin, cos;

   scanf("%f", &x);

   float sin_result = x;
   float cos_result = 1;

   for (int i = 1;i <= 100;i++)
   {
      sin = x;
      sin *= -x * x;
      sin /= (i * 2 + 1) * (i * 2);
      sin_result += sin;

      cos = 1;
      cos *= -x * x;
      cos /= (i * 2) * (i * 2 - 1);
      cos_result += cos;
   }

   printf("%f %f\n", sin_result, cos_result);

   return 0;
}