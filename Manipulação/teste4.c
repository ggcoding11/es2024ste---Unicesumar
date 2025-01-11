#include <stdio.h>

int main(){
	char mensagem[] = "Pedro Henrique";
	
	FILE *arquivo;
	
	arquivo = fopen("arq.txt", "w");
	
	if (arquivo == NULL){
		printf("Erro na abertura do arquivo!");
		return 1;
	}
	
	fputs(mensagem, arquivo);
	
	return 0;
}
