/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    
    printf("Informe um número:\n");
    scanf("%d", & n);
    
    if (n > 0) {
        printf("%d é positivo!", n);
    } else if (n < 0) {
        printf("%d é negativo!", n);
    } else {
        printf("%d é igual a zero!", n);
    }
    
    return 0;
}