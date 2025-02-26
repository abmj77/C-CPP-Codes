// Lab2_1

// Program execution begins and ends there.
#include <stdio.h> //The library we are using for the following functions

int main()//Program start
{
    
    int YoB, CY ,age;//Define variables
    
    printf("Enter your Year of Birth: ");//A message to make the user enter the year of birth
    scanf("%d", &YoB);//input function
    
    printf("Enter the current year: ");//A message to make the user enter the current year
    scanf("%d", &CY);//input function
    
    age = CY - YoB;//Age Calculation Equation
    
    printf("Enterd Year of Birth: %d\n", YoB);//print the entered values
    printf("Enterd Current Year: %d\n ", CY);//print the entered values
    printf("You are %d years old\n\n ", CY-YoB);//print the entered values

    
    
    return(0);
        
}//end the program