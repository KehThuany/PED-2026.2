/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int n;
    int p = 0;  // globais
    
    printf("Informe um número: ");
    scanf("%d", & n);
    
    for (int i = 1; i < (n + 1); i++) {
        if (i % 2 == 0) { // tem que percorrer 'i'
            p++;
        } else {
            continue;
        }
    }
    printf("Existem %d pares.", p);
    
    return 0;
}