(l
#include <stdio.h>

int main()
{
    //counts 1 to 100
    for(int num = 1; num <= 100; num++)
    {   
        //calculates if it is a multiple of 3 
        int mult_3 = num%3;
        //calculates if it is a multiple of 5
        int mult_5 = num%5;
        
        //checks if it is a multiple of 3 and 5
        if(mult_3 == 0 && mult_5 == 0)
        {
            printf("FooBaa\n");    
        }
        //checks if it is a multiple of 3 only
        else if (mult_3 == 0)
        {
            printf("Foo\n");
        }
        //checks if it is a multiple of 5 only
        else if (mult_5 == 0)
        {
            printf("Baa\n");
        }
        //if it is not multiple of both, prints the number
        else
        {
            printf("%i\n", num); 
        }
    };