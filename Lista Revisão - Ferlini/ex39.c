#include <stdio.h>

int main(){
	int numero;
	int digitos[10];
	
	printf("Digite um numero: ");
	scanf("%d", &numero);
	int i = 0;
	
	if (numero < 0){
		numero = numero - 2*numero;
	}
	
	while (numero > 0){
		digitos[i] = numero%10;
		numero /= 10;
		i++; 
	}
		
	int e;
	
	for (e = i -1; e >= 0; e--){
		printf("%d/ ", digitos[e]);
	}

	return 0;
}
