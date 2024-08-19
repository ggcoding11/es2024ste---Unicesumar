#include <stdio.h>

int verificarDivisivel(int num){
	if (!(num%4)){
		return !(num%4);
	}
	return 0;
}

int main(){
	int valor1;
	printf("Digite um numero: ");
	scanf("%d", &valor1);
	
	if ((valor1 > 99) && (valor1 < 1000)){
			if (verificarDivisivel(valor1)){
				printf("o numero e divisivel por 4");
			}else{
				printf("o numero nao e divisivel por 4");
			}
	}else{	
		printf("esse valor deve ter 3 digitos");
	}
}


