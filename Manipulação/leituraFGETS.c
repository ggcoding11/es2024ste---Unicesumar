#include <stdio.h>

int main(){
	FILE *walter;
	
	walter = fopen("arquivodeteste.txt", "r");
	
	char palavra[20];
	
	if (walter == NULL){
		printf("Erro na abertura do arquivo");
		return 1;
	} else {
		printf("Abriu corretamente\n\n");
	}
	
	while (fgets(palavra, sizeof(palavra), walter) != NULL){
		printf("Palavra lida: %s", palavra);
	}
	
	fclose(walter);
	
	return 0;
}
