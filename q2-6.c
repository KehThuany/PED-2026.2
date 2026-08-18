/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int ano;
    
    printf("Informe o ano:\n");
    scanf("%d", & ano);
    
    if (ano % 4 == 0 || ano % 400 == 0) {
        printf("O ano %d é bissexto.", ano);
    } else {
        printf("O ano %d NÃO é bissexto.", ano);
    }

    return 0;
}