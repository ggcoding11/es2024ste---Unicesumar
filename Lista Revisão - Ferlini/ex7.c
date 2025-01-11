#include <stdio.h>

int fatorial(int n){
	if (!n){
		return 1;
	}
	
	return (n * fatorial(n-1));
}

int main(){
	int numero;
	
	printf("Digite o valor: ");
	scanf("%d", &numero);
	
	printf("Fatorial: %d", fatorial(numero));
	
	return 0;
}
