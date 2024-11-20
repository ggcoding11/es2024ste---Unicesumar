#include <stdio.h>
#include <string.h>
#include <locale.h>

int i;

void verificarArquivo(char arquivos[][50], int qntd){
	FILE *ponteiro;
	
	for (i = 0; i < qntd; i++){
		ponteiro = fopen(arquivos[i], "r");
		
		if (ponteiro == NULL){
			printf("Arquivo %s não existe\n", arquivos[i]);
		} else {
			printf("Arquivo %s existe\n", arquivos[i]);
		}
	}
	
	fclose(ponteiro);
}

int main(){
	setlocale(LC_ALL, "Portuguese");
	int qntd;
	
	printf("Quantos nomes de arquivos serão escritos?: ");
	scanf("%d", &qntd);
	
	char arquivos[qntd][50];
	
	getchar();
	
	for (i = 0; i < qntd; i++){
		printf("Escreva o nome do %d° arquivo: ", i+1);
		gets(arquivos[i]);
		arquivos[i][strcspn(arquivos[i], "\n")] = '\0';
	}
	
	printf("\n");

	verificarArquivo(arquivos, qntd);
	
	return 0;
	
}
