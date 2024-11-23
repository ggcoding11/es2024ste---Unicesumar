#include <stdio.h>

int main(){
	int i, j;
	
	int A[5];
	int temp;
	
	for (i = 0; i < 5; i++){
		printf("Digite o numero: ");
		scanf("%d", &A[i]);
	}
	
	for (i = 0; i < 4; i++){
		for (j = 0; j < 4 - i; j++){
			if (A[j] > A[j+1]){
				temp = A[j];
				A[j] = A[j+1];
				A[j+1] = temp;
			}
		}
	}
	
	for (i = 0; i < 5; i++){
		printf("%d ", A[i]);
	}
	
	
	return 0;
}
