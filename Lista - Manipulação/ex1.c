#include <stdio.h>

int main(){
	FILE *ponteiro;
	
	ponteiro = fopen("meuarquivo.txt", "w");
	
	if (ponteiro == NULL){
		printf("Erro na abertura no arquivo!");
		return 1;
	}
	
	fprintf(ponteiro, "%s", "Hello, World");
	
	fclose(ponteiro);
	
	return 0;
	
}
