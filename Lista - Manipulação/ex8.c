#include <stdio.h>
#include <string.h>

int main(){
	FILE *ptr;
	ptr = fopen("meuarquivo.txt", "r");
	
	char palavra[20];
	
	printf("Escreva a palavra procurada: ");
	fgets(palavra, sizeof(palavra), stdin);
	
	palavra[strlen(palavra)-1] = '\0';
	
	char linha[50];
	
	int i = 0;
	
	while(fgets(linha, sizeof(linha), ptr) != NULL){
		char *ptr2;
		
		printf("%s\n", linha);
		
		ptr2 = strstr(linha, palavra);
		
		if (ptr2){
			i++;
		}
	}	
	
	printf("Palavra aparece: %d", i);
	
	fclose(ptr);
	
	return 0;
}
