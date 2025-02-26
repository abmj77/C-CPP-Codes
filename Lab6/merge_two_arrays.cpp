//Lab 6_2

#include<stdio.h>

int main()
{
    int ARY10 = 10 , ARY20 = 20;
 
    int array_1[ARY10] , array_2[ARY10] , array_3[ARY20];
    
    printf("Enter 10 numbers for Array 1:\n");
    for(int n = 0 ; n < ARY10 ; n++)
    {
    scanf("%d",&array_1[n]);
    }
    
    printf("Enter 10 numbers for Array 2:\n");
    for(int r = 0 ; r < ARY10 ; r++)
    {
    scanf("%d",&array_2[r]);
    }
    
    for(int e = 0 ; e < ARY20 ; e += 2)
    {
    array_3[e] = array_1[e/2];
    array_3[e+1] = array_2[e/2];
    }
    
    printf("The values of array 1 are :");
    
    for(int u = 0 ; u < ARY10 ; u++)
    {
    printf("%d ",array_1[u]);
    }
    
    printf("\n");
    printf("The values of array 2 are :");
    
    for(int c = 0 ; c < ARY10 ; c++)
    {
    printf("%d ",array_2[c]);
    }
    
    printf("\n");
    printf("The values of array 3 are :");
    
    for(int q = 0 ; q < ARY20 ; q++)
    {
    printf("%d ",array_3[q]);
    }
}