#include <stdio.h>

int main(){
	float x,y;
	float resultado;
	
	printf("Digite o primeiro numero: ");
	scanf("%d", &x);
	
	printf("Digite o segundo numero: ");
	scanf("%d", &y);
	
	resultado = x/y;
	
	if (y){
		printf("O resultado da %.2f", resultado);
	} else {
		printf("Denominador nulo!");
	}
	
	return 0;
}
