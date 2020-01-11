#include <stdio.h>
int main() 
{
   int i, j, count;
   int start, end;
   printf("Enter the range upto which tables are to be printed");
   scanf("%d%d",&start,&end);
   for(i = start; i <= end; i++) {
      count = i;

      for(j = 1; j <= 10; j++) {
         printf(" %d", count*j);
      }

      printf("\n");
   }

   return 0;
}
