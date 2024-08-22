#include <stdio.h>

double somar(double n1, double n2);
	
double subtrair(double n1, double n2);
	
double multiplicar(double n1, double n2);
	
double dividir(double n1, double n2);

double media(double n1, double n2);

int main(){
	char operador;
	double valor1, valor2;
	
	printf("Digite dois numeros e um operador (EX: 3+5): \n(+) Adicao\n(-) Subtracao\n(*) Multiplicacao\n(/) Divisao\n");
	printf("Digite o operador: ");
	scanf("%c", &operador);
	printf("Digite o primeiro numero: ");
	scanf("%lf", &valor1);
	printf("Digite o segundo numero: ");
	scanf("%lf", &valor2);
	
	switch(operador){
		case '+':
			printf("A soma da %.2lf", somar(valor1,valor2));
			break;
		case '-':
			printf("A subtracao da %.2lf", subtrair(valor1,valor2));
			break;
		case '*':
			printf("A multiplicacao da %.2lf", multiplicar(valor1,valor2));
			break;
		case '/':
			printf("A divisao da %.2lf", dividir(valor1,valor2));
			break;
		default:
			printf("Operacao invalida!");
			break;
	}
	
	printf("\nA media entre os valores da %.2lf", media(valor1,valor2));
	
	return 0;
}

double somar(double n1, double n2){
	return n1 + n2;
}

double subtrair(double n1, double n2){
	return n1- n2;
}

double multiplicar(double n1, double n2){
	return n1*n2;
}

double dividir (double n1, double n2){
	return n1/n2;
}

double media(double n1, double n2){
	return dividir(somar(n1,n2),2);
}
