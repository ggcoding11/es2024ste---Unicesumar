#include <stdio.h>

int duplicar(int (n1)){
	
	n1 *= 2;
	
	return (n1);
}



int main(){
	int numero = 3;
	
	int antigo = numero;
	
	duplicar(numero);
	
	printf("O numero %d duplicado e %d", antigo, numero);
	
	return 0;
}

