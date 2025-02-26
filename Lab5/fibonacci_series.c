// Lab 5_1

#include <stdio.h>
    
    int main()
    {
        
    int Fibonacci(int);
    int fib , counter;
    
    printf("Enter any number, hint: the number must not be 0:\n");
    scanf("%d",&fib);
    
    while(fib < 0)
    {
    printf("Enter any number, hint: the number must not be 0:\n");
    scanf("%d",&fib);
    }
    
    printf("Fibonacci series\n");
    for (counter=1; counter <= fib; counter++)
    {
    printf("%d , ", Fibonacci(counter));
    }
    return 0;
    }
    
    int Fibonacci(int fib)
    
    {
    if (fib == 0) 
    return 0;
    
    else if (fib == 1)
    return 1;
    
    else
    return (Fibonacci(fib-1) + Fibonacci(fib-2));
    }
    