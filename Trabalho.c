#include <stdio.h>

int main(){
	int i, j;
	
	int A[5];
	int temp;
	
	//Selection Sort
	
	for (i = 0; i < 5; i++){
		printf("Digite o numero: ");
		scanf("%d", &A[i]); //Preenchimento do vetor
	}
	
	for (i = 0; i < 4; i++){ 
		for (j = i + 1; j < 5; j++){ //A cada ciclo do i, agora, o menor valor � ignorado nos pr�ximos ciclos de compara��o
			if (A[i] > A[j]){
				temp = A[i]; //Troca dos valores com o uso da vari�vel "temp"
				A[i] = A[j];
				A[j] = temp; 
			}
		}
	}
	
	for (i = 0; i < 5; i++){
		printf("%d ", A[i]);
	}
	
	printf("\n\n");
	
	//Bubble Sort
	
	for (i = 0; i < 5; i++){
		printf("Digite o numero: ");
		scanf("%d", &A[i]); //Preenchimento do vetor
	}
	
	for (i = 0; i < 4; i++){ 
		for (j = 0; j < 4 - i; j++){ //A cada ciclo do i, o maior valor coletado � ignorado nas pr�ximas compara��es
			if (A[j] > A[j+1]){
				temp = A[j];
				A[j] = A[j+1];
				A[j+1] = temp;  //Troca dos valores
			}
		}
	}
	
	for (i = 0; i < 5; i++){
		printf("%d ", A[i]);
	}
	
	printf("\n\n");
	
	//Insetion Sort
	
	for (i = 0; i < 5; i++){
		printf("Digite o numero: ");
		scanf("%d", &A[i]); //Preenchimento do vetor
	}
	
	for (i = 1; i < 5; i++){
		j = i;
		while (A[j] < A[j-1]){
			temp = A[j]; //Troca de elementos 
			A[j] = A[j-1];
			A[j-1] = temp;
			
			if ((j - 1) > 0){ //Cada vez que o c�digo avan�a na ordem dos elementos do vetor...
				j--; //Ele acaba regredindo para ordenar os elementos a esquerda
			} //Vai nessa din�mica at� que todos estejam ordenados
		}
	}
	
	for (i = 0; i < 5; i++){
		printf("%d ", A[i]);
	}
	
	
	return 0;
}
