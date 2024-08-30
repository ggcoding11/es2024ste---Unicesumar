#include <stdio.h>

int main(){
	int numero;
	int contador;
	
	printf("Qual o numero: ");
	scanf("%d", &numero);
	
	printf("TABUADA:\n");
	
	for (contador = 1; contador <= 10; contador++){
		printf("%d X %d = %d\n", numero, contador, (numero*contador));
	}
	return 0;
}
