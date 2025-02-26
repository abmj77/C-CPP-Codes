//Assignment 4

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()//Star the program.
{
   //then I defined constant varibles.
   const int Z_X = 13 , Tion_ = 36000 ; int Op_1 , Op_2 , Op_kl , Na_Ty , Mo_j = 0 , karel[Tion_] , qu_e[Z_X] = {0};
   
   //Then I Identified the variables that I wanted.
   float Om_Sh[] = {0,1.0/36,2.0/36,3.0/36,4.0/36,5.0/36,6.0/36,5.0/36,4.0/36,3.0/36,2.0/36,1.0/36};

   //Then I called that random function.
   srand(time(NULL));
   
   //Then I created four for loops to repeat the numbers.
   for(int n = 0 ; n < Tion_ ; n++)
   { Op_1 = rand() % 6 + 1 ; Op_2 = rand() % 6 + 1 ; Op_kl = Op_1 + Op_2 ; karel[n] = Op_kl; }
   
   for(int f = 0; f < Tion_ ; f++)
   { Na_Ty = karel[f] ; ++qu_e[Na_Ty]; }
   
   //Then I printed the name of numbers.
   printf("%s%13s%13s%25s\n" , "Number" , "Frequency" , "Percentage1" , "Expected Percentage2");
   
   for(int t = 1 ; t < Z_X - 1 ; t++)
   { printf("%-9d%-12d%-20.2f%.2f\n" , t+1 , qu_e[t+1] , (qu_e[t+1]/36000.0)*100 , Om_Sh[t]*100) ; Mo_j+=qu_e[t+1]; }   
   
   
   return 0;
}//End the program.