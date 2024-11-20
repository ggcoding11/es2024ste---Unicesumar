#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	FILE *ponteiro;
	
	ponteiro = fopen("numeros.txt", "r");
	
	if (ponteiro == NULL){
		printf("Erro na abertura do arquivo!");
		return 1;
	}
	
	int i;
	
	int soma = 0;
	int num;
	
	for (i = 0; i < 10; i++){
		fscanf(ponteiro, "%d", &num);
		soma += num;
	}
	
	printf("Soma: %d", soma);
	
	fclose(ponteiro);
	
	return 0;	
}
