// Lab 4_2

#include <stdio.h>

int main()
{
    double all = 0 , n;
    
    do {
    printf ("Enter any number to calculate the sum, hint 0 will exit:");
    scanf("%lf",&n);
    
    if(n == 0)
    {
    break;
    }
    
    all+=n;
    
    printf("\tThe sum is:%g\n\n", all);
    
    }
    while (n!=0) ;
    
    printf("The sum of all numbers = %g", all);
    
    return 0;
}