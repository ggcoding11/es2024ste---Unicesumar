#include <stdio.h>
#include <string.h>

int main(){
	FILE *ponteiro;
	
	ponteiro = fopen("numeros.txt", "w+");
	
	if (ponteiro == NULL){
		printf("Erro na abertura no arquivo!");
		return 1;
	}
	
	int i;
	
	for(i = 1; i <= 10; i++){
		fprintf(ponteiro, "%d\n", i);
	}
	
	rewind(ponteiro);
	
	int soma = 0; 
	int num = 0;
	
	for (i = 1; i <= 10; i++){
		fscanf(ponteiro, "%d", &num);
		soma += num*3;
	}
	
	printf("Soma de cada numero multiplicado por 3: %d", soma);
	
	fclose(ponteiro);
	
	return 0;
	
}
