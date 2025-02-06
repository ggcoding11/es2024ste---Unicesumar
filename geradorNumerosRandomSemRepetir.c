#include <stdio.h>

void gerarValores(int vetor[], int min, int tamanho){
	int i;
	
	for (i = 0; i < tamanho; i++){
		vetor[i] = min++;
	}
}

void embaralhar(int vetor[], int tamanho){
	int i;
	
	for (i = tamanho - 1; i > 0; i--){
		int j =  rand() % (i + 1);
		
		int temp = vetor[i];
		vetor[i] = vetor[j];
		vetor[j] = temp;
	}
}

int main(){
	printf("Gerador de numeros aleatorios (sem repetir):\n\n");	
	
	int min, max;
	
	do {
		printf("Digite o valor minimo: ");
		scanf("%d", &min);	
		printf("Digite o valor maximo: ");
		scanf("%d", &max);
		
		system("cls");
	} while (min >= max);
	
	int tamanho = max - min + 1;
	
	int vetor[tamanho];	
	
	gerarValores(vetor, min, tamanho);
	
	embaralhar(vetor, tamanho);
	
	int i;
	
	printf("3 numeros aleatorios escolhidos: ");
	
	int numeros[3];
	
	for (i = 0; i < 3; i++){
		numeros[i] = vetor[i];
		printf("%d ", numeros[i]);
	}
	
	return 0;
}
