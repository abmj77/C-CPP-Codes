// Lab 3_2

#include <stdio.h>

int main()
{

    int n;
    float mul , m;
    
    printf("Enter positive number: ");
    scanf("%d",&n);
    
    while (n<0)
    {
       printf("Not negative, positive number: ");
       scanf("%d",&n);
    }
    
    printf("Enter any number for multiples: ");
    scanf("%f",&mul);
    
    while (mul<0)
    {
       printf("Make the multiples positive: ");
       scanf("%f",&mul);
    }
    
    
    printf("All numbers from 0 up to %d that are multiples of %.1f is: \n ",n,mul);

    while (m<=n)
    {
        printf("%.1f , ",m);
        m+=mul;
    }

    
    return 0;
}
