#include <stdio.h>

int main(){
	int quantidadeNumeros;
	int contador;
	int numero;
	int maiorNumero, menorNumero;
	
	
	printf("Quantos numeros vai digitar?: ");
	scanf("%d", &quantidadeNumeros);
	
	if (quantidadeNumeros != 0){
		for (contador = 0; contador < quantidadeNumeros; contador++){
			printf("\nDigite um numero: ");
			scanf("%d", &numero);
		
			if(contador == 0){
				maiorNumero = numero;
				menorNumero = numero; 	
			}
		
			if(numero > maiorNumero){
				maiorNumero = numero;
			}
		
			if(numero < menorNumero){
				menorNumero = numero;
			}	
		
		}
		
		printf("\n\nO maior numero e %d e o menor e %d", maiorNumero, menorNumero);
	}
	
	
	return 0;
}
