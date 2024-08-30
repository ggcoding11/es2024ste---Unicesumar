/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int numero;
    int ultimoDigito;
    
    printf("Digite um numero de 3 digitos: ");
    scanf("%d", &numero);
    
    if ((numero >= 100) && (numero <1000)){
        ultimoDigito = numero/100;
        
        if (!(ultimoDigito%2)){
            printf("PAR");
        } else {
            printf("IMPAR");
        }
        
    } else {
        printf("O numero nao possui 3 digitos!");
    }
    
    return 0;
}