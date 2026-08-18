/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int n;
    
    printf("Informe o número: ");
    scanf("%d", & n);
    
    for (int i = 1; i < 11; i++) {
        int t = n * i;
        printf("%d\n", t);
    }

    return 0;
}