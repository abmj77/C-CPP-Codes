// Lab2_3

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
    
   switch(age/10)
   {
   
    case 0:
    printf("You are less than than 10\n");
    break;
    
    case 1:
    printf("You are in your tens / teens\n");
    break;
    
     case 2:
    printf("You are in your twenties\n");
    break;
    
     case 3:
    printf("You are in your thirties\n");
    break;
    
     case 4:
    printf("You are in your fourties\n");
    break;
    
     case 5:
    printf("You are in your fifties\n");
    break;
    
     case 6:
    printf("You are in your sixties\n");
    break;
    
     case 7:
    printf("You are in your seventies\n");
    break;
    
     case 8:
    printf("You are in your eighties\n");
    break;
    
     case 9:
    printf("You are in ninetise\n");
    break;
    
     case 10:
    printf("You are a 100+!!\n");
    break;
    
   }

    return(0);
        
}//end the program