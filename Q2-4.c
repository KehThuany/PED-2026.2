/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <math.h>

int main()
{
    int id;
    
    printf("Informe a idade:\n");
    scanf("%d", & id);
    
    if (id >= 0 && id < 12) {
        printf("Criança: %d", id);
    } else if (id >=12 && id < 18) {
        printf("Adolescente: %d", id);
    } else if (id >= 18 && id < 60) {
        printf("Adulto: %d", id);
    } else {
        printf("Idoso: %d", id);
    }
    
    return 0;
}