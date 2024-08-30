#include <stdio.h>

int main(){
	double n1, n2, n3;
	double menorNumero, numeroDoMeio, maiorNumero;
	
	printf("Digite o primeiro numero: ");
	scanf("%lf", &n1);
	
	printf("Digite o segundo numero: ");
	scanf("%lf", &n2);
	
	printf("Digite o terceiro numero: ");
	scanf("%lf", &n3);
	
	maiorNumero = n1;
	
	if (n2 >= maiorNumero){
		maiorNumero = n2;
		if (n1 >= n3){
			menorNumero = n3;
			numeroDoMeio = n1;
		} else {
			menorNumero = n1;
			numeroDoMeio = n3;
		}
	} else {
		if (n3 >= maiorNumero){
			maiorNumero = n3;
			if (n2 >= n1){
				menorNumero = n1;
				numeroDoMeio = n2;
			} else {
				menorNumero = n2;
				numeroDoMeio = n1;
			}
		} else {
			if (n2 >= n3){
				menorNumero = n3;
				numeroDoMeio = n2;
			} else {
				menorNumero = n2;
				numeroDoMeio = n3;
			}
		}
	}
	
	printf("Em ordem crescente fica %.2lf, %.2lf e %.2lf", menorNumero, numeroDoMeio, maiorNumero);
	
	return 0;
}
