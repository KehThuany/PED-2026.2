/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <math.h>

int main()
{
    float n1, n2, n3;
    
    printf("Informe o primeiro número:\n");
    scanf("%f", & n1);
    
    printf("Informe o segundo número:\n");
    scanf("%f", & n2);
    
    printf("Informe o terceiro número:\n");
    scanf("%f", & n3);
    
    if (n1 >= n2 && n1 >= n3) {
        printf("O maior número é: %.1f", n1);
        
    } else if (n2 >= n1 && n2 >= n3) {
        printf("O maior número é: %.1f", n2);
        
    } else {
        printf("O maior número é: %.1f", n3);
    }
   
    return 0;
}