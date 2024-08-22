#include <stdio.h>

double somar(double valor1, double valor2){
	return (valor1 + valor2);
}

double subtrair(double valor1, double valor2){
	return (valor1 - valor2);
}

double multiplicar(double valor1, double valor2){
	return (valor1 * valor2);
}

double dividir(double valor1, double valor2){
	return (valor1 / valor2);
}

-

int main(){
	double n1, n2;
	char op;
	
	printf("Digite dois numeros com um operador (Ex: 3 + 5): ");
	scanf("%lf %c %lf", &n1, &op, &n2);

	switch(op){
		case '+':
			printf("A soma da %lf", somar(n1,n2));
			break;
		case '-':
			printf("A soma da %lf", subtrair(n1,n2));		
			break;
		case '*':
			printf("A soma da %lf", multiplicar(n1,n2));
			break;
		case '/':
			printf("A soma da %lf", dividir(n1,n2));
			break;	
	}
	
	return 0;
}
