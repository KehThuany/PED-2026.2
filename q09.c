/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <math.h>

int main()
{
    int valor, quant, n100, n50, n20, n10, n5, n2, n1;
    
    printf("Informe o valor em reais:\n");
    scanf("%d", & valor); //1248
    
    n100 = valor / 100; //
    valor = valor % 100; //
    
    n50 = valor / 50;
    valor = valor % 50;
    
    n20 = valor / 20;
    valor = valor % 20;
    
    n10 = valor / 10;
    valor = valor % 10;
    
    n5 = valor / 5;
    valor = valor % 5;
    
    n2 = valor / 20;
    valor = valor % 20;
    
    n1 = valor / 1;
    valor = valor % 1;
    
    printf("%d | Nota(s) de 100\n", n100);
    printf("%d | Nota(s) de 50\n", n50);
    printf("%d | Nota(s) de 20\n", n20);
    printf("%d | Nota(s) de 10\n", n10);
    printf("%d | Nota(s) de 5\n", n5);
    printf("%d | Nota(s) de 2\n", n2);
    printf("%d | Nota(s) de 1\n", n1);
    
    return 0;
}