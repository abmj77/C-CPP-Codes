//Assignment 1 - calculate BMI.

#include <stdio.h>

int main()

{

//First of all I will define variables
float person_weight;
float person_height;

float bmi;
    
//Then let users enter their data
printf("Enter your Weight:");
scanf("%f",&person_weight);

printf("Enter your Height:");
scanf("%f",&person_height);
    
    
//Here I will prosess the inputs
bmi = (10000*person_weight)/(person_height*person_height);

//I will print the result of equation 
printf("Your BMI is :%f\n",bmi);
    
    
//I will print a message explaining the range in which the BMI value is low 
if (bmi<18.5)
printf("underweight");
    
if (bmi>=18.5 && bmi<=24.9)
printf("normal weight");
    
if (bmi>=25 && bmi<=29.29)
printf("overweight");
    
if (bmi>=30)
printf("obese");
    
return 0;
    
//End the program

}