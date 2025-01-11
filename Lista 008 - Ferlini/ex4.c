#include <stdio.h>

int main(){
	int n1, n2;
	int maiorNumero;
	printf("Digite o primeiro numero: ");
	scanf("%d", &n1);
	printf("Digite o segundo numero: ");
	scanf("%d", &n2);
	
	maiorNumero = n1;
	
	if (n2 > n1){
		maiorNumero = n2;
	}
	
	printf("O maior numero e %d", maiorNumero);
	
	
	return 0;
}
