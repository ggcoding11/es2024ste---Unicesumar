#include <stdio.h>

int main(){
	double n1, n2;
	char op;
	
	printf("Digite dois numeros com um operador (Ex: 3 + 5): ");
	scanf("%lf %c %lf");

	switch(op){
		case '+':
			printf("A soma entre os valores da %lf", (double)(n1 + n2));
			break;
	}
	
	return 0;
}
