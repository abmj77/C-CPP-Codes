// Lab 5_2

#include <stdio.h>

    int main()
    {
        
    int factorial(int n);

    int factx;
    printf("Enter a positive number : ");
    scanf("%d", &factx);
    
    while(factx < 0)
    {
    printf("Enter a positive number not negetive : ");
    scanf("%d",&factx);
    }
    
    printf("Factorial of %d = %d", factx , factorial (factx));
    return 0;
    }
    
    int factorial (int factx)
    {
    if (factx >= 1)
    return factx * factorial (factx-1);
    else
    return 1;
    
    }