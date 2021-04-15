//Realiza a contagem de 1 a 100 e verifica se é múltiplo de 3 e 5
#include <stdio.h>

int main()
{
    //inicia contagem de 1 até 100
    for(int num = 1; num <= 100; num++)
    {   
        //calcula se é múltipo de 3 
        int mult_3 = num%3;
        //calcula se é múltiplo de 5
        int mult_5 = num%5;
        
        //verifica se é múltiplo de 3 e 5
        if(mult_3 == 0 && mult_5 == 0)
        {
            printf("FooBaa\n");    
        }
        //verifica se é múltiplo de 3
        else if (mult_3 == 0)
        {
            printf("Foo\n");
        }
        //verifica se é múltiplo de 5
        else if (mult_5 == 0)
        {
            printf("Baa\n");
        }
        //caso não seja múltiplo de nenhum dos 2, imprime o número
        else
        {
            printf("%i\n", num); 
        }
    };