#include <stdio.h>

int main()
{
   int n;
   float sum=0;
   float fraction ;

   printf("int it");
   scanf("%d", &n);

   for (int i = 1; i <= n; i++)
   {
      fraction = (double)4 / (2 * i- 1);
      if(i%2 == 0)
      {
        fraction *= -1;
      }
      sum += fraction;
      printf("%f\n", fraction);
   }

   printf("Pi's num is %f", sum);
   return 0;
}