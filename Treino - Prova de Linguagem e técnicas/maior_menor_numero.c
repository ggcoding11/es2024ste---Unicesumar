#include <stdio.h>

void verificarMaiorMenorNumero();

int contador;
int numero;
int maiorNumero;
int menorNumero;

int main(){	
	for (contador = 0; contador < 3; contador++){
		printf("Digite o numero: ", contador);
		scanf("%d", &numero);
		
		if (!contador){
			maiorNumero = numero;
			menorNumero = numero;
		}
	
		verificarMaiorMenorNumero();	
	}
	
	printf("\nO maior numero e %d\n", maiorNumero);
	printf("O menor numero e %d", menorNumero);
		
	return 0;
}

void verificarMaiorMenorNumero(){
	if(numero > maiorNumero){
		maiorNumero = numero;
	}
	
	if(numero < menorNumero){
		menorNumero = numero;
	}
}
