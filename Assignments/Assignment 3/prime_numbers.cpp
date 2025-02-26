//Assignment 3_1

#include <stdio.h> //first of all I called the library I used.

    int prime(int unkn); //Then I created prototype.

    int main() //Program start.
    {
   int Lan = 10000 , ik , ad = 0; //Then I Identified the variables I wanted.
   
   for (int f = 2; f <= Lan ; f++)//Then I created a loob that repeats the numbers I want.
    {
    ik = prime(f);
    if (ik == 1)
    {printf("%d is prime\n",f);ad++;}
     
    }
    printf("The number of prime between 1 and 10000 is %d" , ad);//Then I printed a message stating what the program will do.
    return 0;
    }

    int prime(int unkn){//Then I Identified function outside of the (main). 
    int ik =1;
    
    for(int i = 2 ; i <= unkn / 2 ; i++)//and I created a loob to bring the numbers and print the prime numbers.
    {if(unkn % i == 0) {ik = 0 ; break;}}
    return ik;
    }