#include <stdio.h>

int main(){
	FILE *ptr;
	
	ptr = fopen("arquivooriginal.txt", "w+");
	
	char texto[50];
	
	printf("Escreva uma frase para passar pra outro arquivo: ");
	fgets(texto, sizeof(texto), stdin);
	
	fprintf(ptr, "%s", texto);
	
	rewind(ptr);
		
	FILE *ptr2;
	
	ptr2 = fopen("copia.txt", "w");
	
	texto[0] = '\0';
	
	while (fgets(texto, sizeof(texto), ptr) != NULL){
		fprintf(ptr2, "%s", texto);
	}
	
	fclose(ptr);
	fclose(ptr2);
	
	return 0;
}
