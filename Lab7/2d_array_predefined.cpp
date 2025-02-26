//Lab 7_2

#include<stdio.h>
int main()
{
   int disp[2][3]={1,3,5,7,9,10};
   printf("Two Dimensional array elements:\n");
   for(int i=0; i<2; i++) {
      for(int j=0;j<3;j++) {
         printf("%d ", disp[i][j]);
      }
      printf("\n");
   }
   return 0;
}