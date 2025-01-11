#include <stdio.h>

int main(){
	
	FILE *walter;
	
	walter = fopen("arquivodeteste.txt", "r");
	
	int n[10];
	
	if (walter == NULL){
		printf("Erro na abertura do arquivo");
		return 1;
	} else {
		printf("Abriu corretamente\n\n");
	}
	
	int i = 0;
	
	while (fscanf(walter, "%d", &n[i]) == 1){
		i++;
	}
	
	fclose(walter);
	
	printf("%d", n[0] + n[1]);
	
	return 0;
}
