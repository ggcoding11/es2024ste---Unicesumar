#include <stdio.h>

int main(){
	float n1, n2,n3;
	float maiorNumero, numeroDoMeio, menorNumero;
	
	printf("Digite o primeiro valor: ");
	scanf("%f", &n1);
	
	printf("Digite o segundo valor: ");
	scanf("%f", &n2);
	
	printf("Digite o terceiro valor: ");
	scanf("%f", &n3);
		
	if ((n1 > n2) && (n1 > n3)){
		maiorNumero = n1;
		if (n2 > n3){
			numeroDoMeio = n2;
			menorNumero = n3;
		} else {
			numeroDoMeio = n3;
			menorNumero = n2;
		}
	} else {
		if ((n2 > n1) && (n2 > n3)){
			maiorNumero = n2;
			if (n1 > n3){
				numeroDoMeio = n1;
				menorNumero = n3;
			} else {
				numeroDoMeio = n3;
				menorNumero = n1;
			}
		} else {
			maiorNumero = n3;
			if (n2 > n1){
				numeroDoMeio = n2;
				menorNumero = n1;
			} else {
				numeroDoMeio = n1;
				menorNumero = n2;
			}
		}
	}
	
	printf("Em ordem crescente, fica %.2f, %.2f e %.2f", menorNumero, numeroDoMeio, maiorNumero);
	
	
	
	
	return 0;
}
