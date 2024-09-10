#include <stdio.h>

int main(){
	int numero;
	int digitoCentena, digitoUnidade;
	
	printf("Digite o numero: ");
	scanf("%d", &numero);
	
	digitoCentena = (numero%1000)/100;
	digitoUnidade = (((numero%1000)%100)%10);
	
	if (!((digitoCentena + digitoUnidade)%4)){
		printf("A soma dos digitos de centena e unidade e divisivel por 4!");
	} else {
		printf("NOPE!");
	}
	return 0;	
}
