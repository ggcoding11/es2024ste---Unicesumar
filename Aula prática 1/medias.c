#include <stdio.h>

int main(){
	char tipoMedia;
	double n1,n2,n3,n4;
	double media;
	
	printf("Qual sera o tipo de media?: "); //por que não funciona lá em baixo
	scanf("%c", &tipoMedia);
	
	printf("Digite o primeiro numero: ");
	scanf("%lf", &n1);
	
	printf("Digite o segundo numero: ");
	scanf("%lf", &n2);
	
	printf("Digite o terceiro numero: ");
	scanf("%lf", &n3);
	
	printf("Digite o quarto numero: ");
	scanf("%lf", &n4);
	
	if (tipoMedia == 'A'){
		media = (n1+n2+n3+n4)/4;
		printf("A media artimética e %lf", media);
	}
	
	if (tipoMedia == 'P'){
		media = ((2*n1) + (3*n2) + (5*n3) + (10*n4))/20;
		printf("A media ponderada e %lf", media);
	}
	
	if (tipoMedia == 'H'){
		media = 4/((1/n1) + (1/n2) + (1/n3) + (1/n4));
		printf("A media harmonica e %lf", media);
	}
	
	return 0;
}
