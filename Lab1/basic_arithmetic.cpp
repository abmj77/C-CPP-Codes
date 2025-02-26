// Lab 1_2

#include <stdio.h>

int main()

{

    int number1;
    int number2;

    printf("Please enter the first number ");
    scanf("%d",&number1);

    printf("Please enter the second number ");
    scanf("%d",&number2);

    printf("Add = %d\n", number1 + number2);
    printf("Sub = %d\n", number1 - number2);
    printf("Mul = %d\n", number1 * number2);
    printf("Div = %d\n", number1 / number2);

    return 0;
}