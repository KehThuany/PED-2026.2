/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int a, b, aux;
    
    printf("Escreva um valor para A:\n");
    scanf("%d", & a);
    
    printf("Escreva um valor para B:\n");
    scanf("%d", & b);
    
    printf("O valor anterior era: A = %d | B = %d \n", a,b);
    
    aux = a;
    a = b;
    b = aux;
    
    printf("O valor agora é: A = %d | B = %d", a,b);

    return 0;
}