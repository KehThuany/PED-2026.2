/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    // banco de dados 
    int iris1_a1=123, iris1_a2=456, iris1_a3=789;
    int iris2_a1=987, iris2_a2=654, iris2_a3=321;
    int iris3_a1=111, iris3_a2=222, iris3_a3=333;
    int iris4_a1=444, iris4_a2=555, iris4_a3=666;

    int iris_us1, iris_us2, iris_us3; // variáveis do usuário
    
    printf("Informe o primeiro valor:\n");
    scanf("%d", & iris_us1);
    
    printf("Informe o segundo valor:\n");
    scanf("%d", & iris_us2);
    
    printf("Informe o terceiro valor:\n");
    scanf("%d", & iris_us3);
    
    if (abs(iris_us1 - iris1_a1) &&           // A senhora não mente mesmo não
        abs(iris_us2 - iris1_a2) &&           // a difícil é difícil mesmo =()
        abs(iris_us3 - iris1_a3) <= 5) {
        printf("Autenticado com sucesso.");
    } else if  (abs(iris_us1 - iris2_a1) && 
                abs(iris_us2 - iris2_a2) && 
                abs(iris_us3 - iris2_a3) <= 5) {
                    printf("Autenticado com sucesso.");
    } else if  (abs(iris_us1 - iris3_a1) && 
                abs(iris_us2 - iris3_a2) && 
                abs(iris_us3 - iris3_a3) <= 5) {
                    printf("Autenticado com sucesso.");
    } else if  (abs(iris_us1 - iris4_a1) && 
                abs(iris_us2 - iris4_a2) && 
                abs(iris_us3 - iris4_a3) <= 5) {
                    printf("Autenticado com sucesso.");
    } else {
        printf("Autentificação falha.");
    }
    return 0;
}