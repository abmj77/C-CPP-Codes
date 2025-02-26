// Lab 3_1

#include <stdio.h>

int main()
{

    int n , count =0;
    
    printf("Enter positive number: ");
    scanf("%d",&n);
    
    while (n<0)
    {
       printf("Not negative, positive number: ");
       scanf("%d",&n);
    }
    
    printf("All numbers from 0 up to %d that are multiples of 5 is: \n",n);

    for (int m = 0 ; m <= n ; m++)
    {
        if (m%5==0)
        {
        printf("%d , ",m);
        }
    }

    
    return 0;
}
