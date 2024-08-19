#include <stdio.h>

int main(){
	
	int n1,n2,n3,n4;
	char tipoMedia;
	float media;
	
	printf("Qual sera o tipo de media?: "); //por que não funciona lá em baixo
	scanf("%c/n", &tipoMedia);
	
	printf("Digite o primeiro numero: ");
	scanf("%d/n", &n1);
	
	printf("Digite o segundo numero: ");
	scanf("%d/n", &n2);
	
	printf("Digite o terceiro numero: ");
	scanf("%d/n", &n3);
	
	printf("Digite o quarto numero: ");
	scanf("%d/n", &n4);
	
	if (tipoMedia == 'A'){
		media = (n1+n2+n3+n4)/4;
		printf("A media artimética e %f", media);
	}
	
	if (tipoMedia == 'P'){
		media = (2*n1 + 3*n2 + 5*n3 + 10*4)/20;
		printf("A media ponderada e %f", media);
	}
	
	if (tipoMedia == 'H'){
		media = 4/((1/n1) + (1/n2) + (1/n3) + (1/n4));
		printf("A media harmonica e %f", media);
	}
	
	return 0;
}
