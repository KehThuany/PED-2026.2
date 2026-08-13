/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <math.h>

int main()
{
    float km, kmCarro, valor, p, total, valorf;
    
    printf("Quantos quilômetros seu carro percorre por litro de combustível?\n");
    scanf("%f", & kmCarro);
    
    printf("Quantos km vão ser no total?\n");
    scanf("%f", & km);
    
    printf("Qual o valor do combustível? (Use ponto '.' no lugar da vírgula ',')\n");
    scanf("%f", & valor);
    
    printf("Quantas pessoas vão?\n");
    scanf("%f", & p);
    
    total = km / kmCarro;
    valorf = total * valor / p;
    
    printf("O valor final por pessoa é: %.02f", valorf);

    return 0;
}