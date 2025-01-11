#include <stdio.h>


float expoente (float capital, int periodo);

int main(){
	
	float capital;
	float taxaJuros;
	int periodo;
	float montante;
	
	printf("Digite o capital inicial: ");
	scanf("%f", &capital);
	printf("Digite a taxa de juros (em %%): ");
	scanf("%f", &taxaJuros);
	printf("Digite o periodo: ");
	scanf("%d", &periodo);
	
	montante = capital * expoente(1 + (taxaJuros/100), periodo/12);
	
	printf("Montante: R$ %.2f", montante);
	
	return 0;
}

float expoente (float capital, int periodo){
	float resultado = 1;
	int contador;
	
	for (contador = 0; contador < periodo; contador++){
		resultado *= capital;
	}
	
	return resultado; 
}
