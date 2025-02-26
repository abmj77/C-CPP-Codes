//Assignment 3_2

#include <stdio.h> //first of all I called the library I used.

unsigned int power( unsigned int , unsigned int); //Then I created prototype.

int main() //Program start.

{
   unsigned int base_ , exponent_; //Then I Identified the variables I wanted.

   printf("Enter a base: ");
   scanf("%u" , &base_);
                                             //Then print a message to make the user enter the value of exponent and base.
   printf("Enter an exponent: ");
   scanf("%u" , &exponent_);

   printf("%u power %u is %u", base_ , exponent_ , power( base_ , exponent_)); //The result.

   return 0;
}
unsigned int  power( unsigned int  base , unsigned int  exponent ) //Then I Identified function outside of the (main). 

{   
    return exponent == 1 ? base : base * power( base , exponent - 1 ); 
}