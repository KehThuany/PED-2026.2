/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <math.h>

int main()
{
    float gc, f;
    
    printf("Informe a temperatura em graus Celsius:\n");
    scanf("%f", & gc);
    
    f = gc * 9 / 5 + 32;
    printf("Em Fahrenheit: %.01f", f);
    
    return 0;
}