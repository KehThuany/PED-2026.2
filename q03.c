/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <math.h>

int main()
{
    float n1, n2, n3, ma;
    
    printf("Informe a primeira nota:\n");
    scanf("%f", & n1);
    
    
    printf("Informe a segunda nota:\n");
    scanf("%f", & n2);
    
    printf("Informe a terceira nota:\n");
    scanf("%f", & n3);
    
    ma = (n1 + n2 + n3) / 3;
    printf("A média aritmética é: %.01f", ma);
    
    return 0;
}