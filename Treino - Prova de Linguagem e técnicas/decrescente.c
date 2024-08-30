#include <stdio.h>

int main(){

	double nota1, nota2, nota3, nota4, nota5;
	double temp;
	char tempNome[80];
	
	printf("Digite a nota 1: ");
	scanf("%lf", &nota1);
	
		
	printf("Digite a nota 2: ");
	scanf("%lf", &nota2);
	
	if (nota1 < nota2){
		nota3 = nota2;
		nota2 = nota1;
		nota1 = nota3;
	}
	
	printf("Digite a nota 3: ");
	scanf("%lf", &nota3);
	
	if (nota1 < nota3){
		nota4 = nota3;
		nota3 = nota2;
		nota2 = nota1;
		nota1 = nota4;
	} else {

		
		if (nota2 < nota3){
			nota4 = nota3;
			nota3 = nota2;
			nota2 = nota4;
		}
	}
	
	printf("Digite a nota 4: ");
	scanf("%lf", &nota4);
	
	if (nota1 < nota4){
		nota4 = nota3;
		nota3 = nota2;
		nota2 = nota1;
		nota1 = nota4;
	} else {

		
		if (nota3 < nota4){
			nota4 = nota3;
			nota3 = nota2;
			nota2 = nota4;
		}
	}
	
	printf("Digite a nota 5: ");
	scanf("%lf", &nota5);
	
	if (nota1 < nota5){
		nota4 = nota3;
		nota3 = nota2;
		nota2 = nota1;
		nota1 = nota4;
	} else {

		
		if (nota2 < nota3){
			nota4 = nota3;
			nota3 = nota2;
			nota2 = nota4;
		}
	}


	
	
	printf("%.2lf, %.2lf, %.2lf", nota1, nota2, nota3);

	return 0;
}
