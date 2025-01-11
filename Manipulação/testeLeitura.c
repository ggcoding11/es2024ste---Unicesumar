#include <stdio.h>

int main(){
	
	FILE *arquivo;
	
	arquivo = fopen("testeLeitura.txt", "r");
	
	if (arquivo == NULL){
		printf("Erro na abertura do arquivo");
		return 1;
	}
	
	int i = 0;
	
	int A[10];
	char B[10][30];
		
	while (fscanf(arquivo, "%d %30s", &A[i], B[i]) == 2){
		i++;
	}
	
	int p;
		
	for (p = 0; p < i; p++){
		printf("%d\n", A[p]);
	}
	
	return 0;
}
