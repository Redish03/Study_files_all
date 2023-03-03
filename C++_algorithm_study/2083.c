#include <stdio.h>

int main() {

   int age, weight;
   char name;
   scanf("%c %d %d", &name, &age, &weight);
   while (1) {

      if (name == '#' && age == 0 && weight == 0) {
         return 0;
      }

      if (age < 17 || weight > 100) {
         printf("%d ", name);
         printf("Junior");

         }
      else {
         printf("%d ", name);
         printf("Senior");
         }
      }

   return 0;

}