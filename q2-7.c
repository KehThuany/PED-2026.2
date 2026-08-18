/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    float l1, l2, l3;
    
    printf("Informe o primeiro lado do triângulo:\n");
    scanf("%f", & l1);
    
    printf("Informe o segundo lado do triângulo:\n");
    scanf("%f", & l2);
    
    printf("Informe o terceiro lado do triângulo:\n");
    scanf("%f", & l3);

    if (l1 + l2 > l3 || l2 + l3 > l1 || l1 + l3 > l2) {
        if (l1 == l2 && l2 == l3 && l3 == l1) {
            printf("O triângulo é Equilátero.");
        } else if (l1 != l2 && l2 != l3 && l3 != l1) {
            printf("O triângulo é Escaleno.");
        } else {
            printf("O triângulo é Isósceles.");
        } 
    } else {
        printf("Não é um triângulo válido.");
    }
    return 0;
}