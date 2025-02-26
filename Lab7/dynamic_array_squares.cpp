//Lab 7_3

#include<stdio.h>
#include<math.h>
int main()
{
   unsigned int N;
   
   printf("enter number of element : ");
   scanf("%d",&N);
   
   int element[N];
   for(int p = 1 ; p <= N ; p++)
    {
        element[p - 1] = pow(p , 2.0);
    }

   for(int i = 0 ; i < N ; i++)
   {
        printf("element %d : %d\n", i+1 , element[i]);
   }      
   return 0;
}