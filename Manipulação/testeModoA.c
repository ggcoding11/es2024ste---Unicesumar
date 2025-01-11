#include <stdio.h>

int main(){
	FILE *pont;
	
	pont = fopen("testemodoa.txt", "a+");
	
	if (pont == NULL){
		printf("Erro na abertura do arquivo!");
		return 1;
	}
	
	char mensagem[50];
	
	while (fgets(mensagem, sizeof(mensagem), pont) != NULL){
		printf("%s", mensagem);
	}
	
	fputs("NADA ", pont);
	

	fclose(pont);
	
	return 0;
}
