#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int verificarValidade(char codigo[11]);

int main(){
	char codigo[11];

	printf("Sistema de rastreamento de encomendas\n\n");
	
	printf("Digite o codigo: ");
	gets(codigo);
	
	if(verificarValidade(codigo)){
		printf("Codigo valido!");
	} else {
		printf("Codigo invalido");
	}
	
	return 0;
}

int verificarValidade(char codigo[11]){
	int valido = 1;
	int i;
	
	for (i = 0; i < 10; i++){
		if (!isdigit(codigo[i])){
			valido = 0;
		}
	}
	
	
	if (strlen(codigo) != 10){
		valido = 0;
	}
	
	return valido;	
}
