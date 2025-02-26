// Lab2_2
 
// Program execution begins and ends there. 
// 
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
     
    if (age>18)//If the statement to print the message “You are an adult” if the age is over 18 
    { 
        printf("You are an adult"); 
    } 
     
    else //Else state to print a message You are a minor if the age is 18 and under 
    { 
        printf("You are a minor"); 
    } 
     
    return(0); 
         
}//end the program
