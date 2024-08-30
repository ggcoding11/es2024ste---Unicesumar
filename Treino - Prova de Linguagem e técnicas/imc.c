#include <stdio.h>

double IMC(double valor1, double valor2);


int main(){
	
	double altura, peso;
	
	printf("Digite a sua altura: ");
	scanf("%lf", &altura);
	
	printf("Digite o seu peso: ");
	scanf("%lf", &peso);
	
	if (IMC(peso, altura) < 16.9){
		printf("Muito abaixo do peso");
	} else {
		if (IMC(peso, altura) <= 18.4){
			printf("Abaixo do peso");
		} else {
			if (IMC(peso, altura) <= 24.9){
				printf("Peso normal");
			} else {
				if (IMC(peso, altura) <= 29.9){
					printf("Acima do peso");
				} else {
					if (IMC(peso, altura) <= 34.9){
						printf("Obesidade grau 1");
					} else {
						if (IMC(peso, altura) <= 40){
							printf("Obesidade grau 2");
						} else {
							printf("Obesidade grau 3");
						}
					}
				}	
			}
		}	
	}
	
	return 0;
}

double IMC(double valor1, double valor2){
	return valor1/(valor2 * valor2);
}
