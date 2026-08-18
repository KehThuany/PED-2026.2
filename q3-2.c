/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int quant, valor;   // globais
    int resultado = 0;
    
    printf("Informe a quantidade de números:\n");
    scanf("%d", & quant);
    
    for (int i = 0; i < quant; i++) {       // 'i' NÃO é global
        printf("Informe o valor:\n");
        scanf("%d", & valor);
        resultado = valor + resultado;
    }
    printf("O resultado da soma é: %d", resultado);

    return 0;
}