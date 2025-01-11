#include <stdio.h>

int main(){
	FILE *arquivo;
	
	arquivo = fopen("josias.txt", "w+");
	
	if (arquivo == NULL){
		printf("Erro na leitura do arquivo!");
		return 1;
	}
	
	fprintf(arquivo, "%d %s", 54, "Gustavo");
	
	rewind(arquivo);
	
	int idade;
	
	char nome[50];
	
	fscanf(arquivo, "%d %s", &idade, nome);
	
	printf("%s\n", nome);
	printf("%d", idade);

	return 0;
}
