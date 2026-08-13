/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <math.h>

int main()
{
    int num1;
    int num2;
    int r;
    
    printf("Informe o primeiro número:\n");
    scanf("%d", & num1);
    
    printf("Informe o segundo número:\n");
    scanf("%d", & num2);
    
    r = num1 + num2;
    printf("O resultado é: %d", r);
    
    return 0;
}