#include <stdio.h>

int main(){
	float x,y;
	
	printf("Digite o primeiro numero: ");
	scanf("%f", &x);
	
	printf("Digite o segundo numero: ");
	scanf("%f", &y);
	
	
	if (y){
		printf("O resultado da %.2f", (x/y));
	} else {
		printf("Denominador nulo!");
	}
	
	return 0;
}
