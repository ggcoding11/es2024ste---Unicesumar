#include <stdio.h>

int main() {
    int num1, num2, num3;
    int menorNumero, numeroDoMeio, maiorNumero, temp;

    // Ler os três números
    printf("Digite o primeiro número: ");
    scanf("%d", &menorNumero);
    printf("Digite o segundo número: ");
    scanf("%d", &numeroDoMeio);
    printf("Digite o terceiro número: ");
    scanf("%d", &maiorNumero);

    // Ordenar os números
    
	if (menorNumero > maiorNumero){
    	temp = menorNumero;
    	menorNumero = maiorNumero;
    	maiorNumero = temp;
	}
	
	if (menorNumero > numeroDoMeio) {
    	temp = menorNumero;
    	menorNumero = numeroDoMeio;
    	numeroDoMeio = temp;
    }
    
	if (numeroDoMeio > maiorNumero){
		temp = maiorNumero;
    	maiorNumero = numeroDoMeio;
    	numeroDoMeio = temp;
	}
	
    // Exibir os números em ordem crescente
    printf("Os números em ordem crescente são: %d, %d, %d\n", menorNumero, numeroDoMeio, maiorNumero);

	return 0;
}
