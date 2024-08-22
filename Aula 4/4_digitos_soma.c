#include <stdio.h>

int main(){
	int numero;
	float somaDigitos;
	printf("Digite um numero de 4 digitos: ");
	scanf("%d", &numero);
	
	if (numero > 999 && numero < 10000){
		somaDigitos += (numero/1000);

		numero = numero%1000;
	
		somaDigitos += numero/100;
	
		numero = numero%100;
	
		somaDigitos += numero/10;
	
		somaDigitos += numero%10;
		
		printf("Soma dos digitos = %.0f", somaDigitos);	
	}else{
		printf("Esse valor nao tem 4 digitos");
	}
	
	
	return 0;
}
