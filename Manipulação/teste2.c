#include <stdio.h>

int main(){
	FILE *arquivo;
	
	arquivo = fopen("pedro.txt", "r+");
	
	if (arquivo == NULL){
		printf("Erro na leitura do arquivo!");
		return 1;
	}
	
	int num;
		
	int soma = 0;
		
	int i;	
	
	for (i = 0; i < 3; i++){
		fscanf(arquivo, "%d", &num);
		soma += num;
	}
	
	printf("%d", soma);
	
	
	rewind(arquivo);
	
	fprintf(arquivo, "%d ", 11);
	fprintf(arquivo, "%d ", 12);
	fprintf(arquivo, "%d ", 13);
	
	return 0;
}
