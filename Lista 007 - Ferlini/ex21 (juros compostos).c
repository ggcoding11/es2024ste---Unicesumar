#include <stdio.h>
#include <locale.h>
	
float expoente(float numero, int potencia);
	
int main(){
	setlocale(LC_ALL, "Portuguese");
	float valorTotal;
	float taxaJuros;
	int numeroParcelas;
	float parcela;
	
	printf("Qual o valor total do empréstimo?: ");
	scanf("%f", &valorTotal);
	printf("Qual a taxa de juros(em %%) ?: ");
	scanf("%f", &taxaJuros);
	printf("Quantas parcelas?: ");
	scanf("%d", &numeroParcelas);
	
	// Juros compostos
	valorTotal = valorTotal * expoente((1 + (taxaJuros / 100)), numeroParcelas/12);
	parcela = valorTotal / numeroParcelas;
	
	printf("O valor total pago (+ juros): R$ %.2f\n", valorTotal);
	printf("O valor das parcelas mensais é: R$ %.2f\n", parcela);
	
	return 0;
}

float expoente(float numero, int potencia) {
	float resultado = 1.0;
	int contador;
	
	for (contador = 0; contador < potencia; contador++) {
		resultado *= numero;
	}
	
	return resultado;
}
