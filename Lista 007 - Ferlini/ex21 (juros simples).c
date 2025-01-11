#include <stdio.h>
#include <locale.h>
	
float expoente(float numero, int potencia);
	
int main(){
	setlocale(LC_ALL, "Portuguese");
	float valorTotal;
	float taxaJuros;
	float numeroParcelas;
	float parcela;
	float juros;
	int contador;
		
	printf("Qual o valor total do empréstimo?: ");
	scanf("%f", &valorTotal);
	printf("Qual a taxa de juros(em %%) ?: ");
	scanf("%f", &taxaJuros);
	printf("Quantas parcelas?: ");
	scanf("%f", &numeroParcelas);
	
	//Juros compostos
	
	valorTotal = valorTotal *expoente((1 + (taxaJuros/100)), numeroParcelas);
	
	parcela = valorTotal/ numeroParcelas;
	
	printf("O valor total pago (+ juros): R$ %.2f\n", valorTotal);
	printf("O valor das parcelas mensais é: R$ %.2f", parcela);
	
	return 0;
}

float expoente(float numero, int potencia){
	int contador;
	
	for (contador = 0; contador < potencia; contador++){
		numero *= numero;
	}
	
	return numero;
}
