#include <stdio.h>
#include <string.h>

int main(){
	FILE *ponteiro;
	
	ponteiro = fopen("meuarquivo.txt", "r");
	
	if (ponteiro == NULL){
		printf("Erro na abertura no arquivo!");
		return 1;
	}
	
	char linha[50];
	
	fgets(linha, sizeof(linha), ponteiro); 
	
	printf("%s", linha);
	
	fclose(ponteiro);
	
	return 0;
	
}
