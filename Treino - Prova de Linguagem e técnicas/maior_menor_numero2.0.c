#include <stdio.h>

int main(){
	int numero, contador, maiorNumero;
	
	for (contador = 0; contador < 10; contador++){
		printf("Digite o numero: ");
		scanf("%d", &numero);
		
		if ((!contador)||(numero > maiorNumero)){
			maiorNumero = numero;
		}
	}
	
	printf("O maior numero e %d", maiorNumero);
	
	return 0;
}
