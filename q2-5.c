/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int mes;
    
    printf("Informe o número do mês:\n");
    scanf("%d", & mes);
    
    switch(mes) {
        case 1:
            printf("%d | Janeiro", mes);
            break;
        
        case 2:
            printf("%d | Fevereiro", mes);
            break;
        
        case 3:
            printf("%d | Março", mes);
            break;
            
        case 4:
            printf("%d | Abril", mes);
            break;
            
        case 5:
            printf("%d | Maio", mes);
            break;
        
        case 6:
            printf("%d | Junho", mes);
            break;
        
        case 7:
            printf("%d | Julho", mes);
            break;
            
        case 8:
            printf("%d | Agosto", mes);
            break;
            
        case 9:
            printf("%d | Setembro", mes);
            break;
            
        case 10:
            printf("%d | Outubro", mes);
            break;
            
        case 11:
            printf("%d | Novembro", mes);
            break;
            
        case 12:
            printf("%d | Dezembro", mes);
            break;
        
        default:
            printf("Número inválido!");    
    }

    return 0;
}
