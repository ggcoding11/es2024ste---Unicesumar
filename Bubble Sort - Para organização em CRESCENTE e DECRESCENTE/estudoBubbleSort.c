#include <stdio.h>

int main(){
	int temp;
	int i, e;
	int tamanho;
	
	printf("Qual sera o tamanho do vetor: ");
	scanf("%d", &tamanho);
	
	int pedro[tamanho];
	
	for (i = 0; i < tamanho; i++){
		printf("Elemento %d: ", i+1);
		scanf("%d", &pedro[i]);
	}	
	
	
	for (i = 0; i < tamanho; i++){
		for (e = i+1; e < tamanho; e++){
			if (pedro[i] > pedro[e]){
				temp = pedro[i];
				pedro[i] = pedro[e];
				pedro[e] = temp;
			}	
		}	
	}
	
	printf("Ordem CRESCENTE do vetor: ");
	
	for (i = 0; i < tamanho; i++){
		printf("%d/ ", pedro[i]);
	}
	
	return 0;
}
