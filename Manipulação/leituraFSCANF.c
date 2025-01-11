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
	
	while (fscanf(walter, "%s", palavra) == 1){
		printf("Palavra lida: %s\n", palavra);
	}
	
	fclose(walter);
		
	return 0;
}
