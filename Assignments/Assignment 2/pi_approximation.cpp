//Assignment 2_2

#include <stdio.h>
#include <math.h>
int main()
{
    float pi = 0 , n = 0.000001;
    int ad = 1 , ad_1 = 0 , ad_2 = 0 , ad_3 = 0;
    double O = 1;
    bool bmc = true;
    
    do 
    {
        if(bmc)
        {
        pi += 4 / O;
        bmc = false;
        }
        else
        {
        pi -= 4 / O;
        bmc = true;
        }
        
        O+=2;
        if(ad<20)
        {
        }
    if(fabs(3.141000 - pi) < n)
    {
	   ad_1=ad;
	   
	}
	if(fabs(3.141500 - pi) < n)
	{
	   ad_2=ad;
	    
	}
	if(fabs(3.141590 - pi) < n)
	{
	   ad_3=ad;
	}
	if(ad_1 != 0 && ad_2 != 0 && ad_3 !=0){
	    break;
	}
 	ad++;
    }
    while ( true);

     printf("3.141 at %d\n",ad_1);
     printf("3.1415 at %d\n",ad_2);
     printf("3.14159 at %d\n",ad_3);
    return 0;
}