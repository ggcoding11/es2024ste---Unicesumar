#include <stdio.h>

int main(){
	FILE *ptr;
	
	ptr = fopen("inteiros.txt", "r");
	
	if (ptr == NULL){
		printf("Erro na abertura do arquivo!");
		return 1;
	}	
	
	int maior, menor, n;
	
	fscanf(ptr, "%d", &n);
	
	maior = n;
	menor = n;
	
	while (fscanf(ptr, "%d", &n) == 1){
		if (n > maior){
			maior = n;
		}
		
		if (n < menor){
			menor = n;
		}
	}
	
	printf("MAIOR: %d\n", maior);
	printf("MENOR: %d\n", menor);
		
	fclose(ptr);
	
	return 0;
}
