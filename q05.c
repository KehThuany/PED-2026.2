/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <math.h>

int main()
{
    int s, min, hr, seg;
    
    
    printf("Informe os segundos que será convertido: \n");
    scanf("%d", & s);
    
    hr = s / 3600;
    s =  s % 3600;
    min = s / 60;
    seg = s % 60;
    
    printf("O resultado é: %dh %dmin %ds", hr, min, seg);
    
    
    
    
    return 0;
}