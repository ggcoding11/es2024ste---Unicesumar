#include <stdio.h>

void bubbleSort(int array[], int quantidadeValores);
void bubbleSortReverso(int array[], int quantidadeValores);

int main(){
	int contador;
	int quantidadeValores;
	int array[100];
	
	printf("Qual a quantidade de valores (MAX. 100): ");
	scanf("%d", &quantidadeValores);
	
	//Entrada dos valores
	for (contador = 0; contador < quantidadeValores; contador++){
		printf("Digite o %do numero: ", (contador+1));
		scanf("%d", &array[contador]);
	}
	
	bubbleSort(array, quantidadeValores);

	//Saída dos valores (CRESCENTE)
	for (contador = 0; contador < quantidadeValores; contador++){
		printf("%d ", array[contador]);
	}
	
	printf("\n");
	
	bubbleSortReverso(array, quantidadeValores);
	
	//Saída dos valores (DECRESCENTE)
	for (contador = 0; contador < quantidadeValores; contador++){
		printf("%d ", array[contador]);
	}

	return 0;
}

void bubbleSort(int array[], int quantidadeValores){
	int contador, contadorSec;
	int temp;
	
	//Bubble Sort - Crescente
	for (contador = 0; contador < quantidadeValores; contador++){
		for (contadorSec = contador + 1; contadorSec < quantidadeValores; contadorSec++){
			if (array[contador] > array[contadorSec]){
				temp = array[contador];
				array[contador] = array[contadorSec];
				array[contadorSec] = temp;
			}
		}
	}	
}

void bubbleSortReverso(int array[], int quantidadeValores){
	int contador, contadorSec;
	int temp;
	
	//Bubble Sort - Decrescente
	for (contador = 0; contador < quantidadeValores; contador++){
		for (contadorSec = contador + 1; contadorSec < quantidadeValores; contadorSec++){
			if (array[contador] < array[contadorSec]){
				temp = array[contador];
				array[contador] = array[contadorSec];
				array[contadorSec] = temp;
			}
		}
	}

}
