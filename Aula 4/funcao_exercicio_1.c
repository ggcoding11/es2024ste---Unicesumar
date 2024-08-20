#include<stdio.h>

void maior_menor_que_20(double $valor){
	if ($valor < 20){
		printf("Menor que 20!");
	} else {
		if ($valor > 20){
			printf("Maior que 20!");
		} else {
			printf("Igual a 20!");
		}
	}
}

int main(){
	double n;
	
	printf("Verificador de numero (se e maior, menor ou igual a 20)\n");
	
	printf("Digite o valor: ");
	scanf("%lf", &n);
	
	maior_menor_que_20(n);
	
	return 0;
}
