//Lab 6_3

#include<stdio.h>

int main()
{
 
  char array1[10] = {'\0'} , array2[10] = {'\0'} , array3[20] = {'\0'};
  int n = 0 , ad = 0;
  
  printf("enter array1\n");
   
   do
    {
    scanf("%c", &array1[n++]);
    }
    while (array1[n-1]!='\n'&&n<10); 
     n = 0;
    printf("enter array2\n");
    do
    {
    scanf("%c", &array2[n++]);
    }
    while (array2[n-1]!='\n'&&n<10); 
   
   for(int i = 0 ; i < 20 ; i += 2){
    array3[i] = array1[i/2];
    array3[i+1] = array2[i/2];
   }
   
   printf("The value of array 1 are :%s\n",array1);
   printf("The value of array 2 are :%s\n",array2);
   printf("The value of array 3 are :%s\n",array3);
}