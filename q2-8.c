/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    float n1, n2;
    char sinal;
    
    printf("Informe o primeiro número:\n");
    scanf("%f", & n1);
    
    printf("Informe a operação (+, -, *, /):\n" );
    scanf(" %c", & sinal);
    
    printf("Informe o segundo número:\n");
    scanf("%f", & n2);
    
    if (sinal == '+') {
        float r = n1 + n2;
        printf("O resultado da soma é: %.02f", r);
    } else if (sinal == '-') {
        float r = n1 - n2;
        printf("O resultado da subtração é: %.02f", r);
    } else if (sinal == '*') {
        float r = n1 * n2;
        printf("O resultado da multiplicação é: %.02f", r);
    } else if (sinal == '/') {
        if (n2 == 0) {
            printf("Divisão por zero não permitida.");
        } else {
            float r = n1 / n2;
            printf("O resultado da soma é: %.02f", r);
        }
    } else {
        printf("Operação inválida.");
    }
    return 0;
}