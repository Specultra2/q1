#include <stdio.h>
int main() {
   int i, j, odd;
   printf("Enter Odd number");
   scanf("%d", &odd);
   for (i = 1; i <= odd; ++i) {
      for (j = 1; j <= i; ++j) {
         printf("* ");
      }
      printf("\n");
   } 
   return 0;
}