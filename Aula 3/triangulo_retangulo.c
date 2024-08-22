#include <stdio.h>

int main(){
	int l1,l2,l3;
	
	printf("Digite tres numeros: ");
	scanf("%d %d %d", &l1,&l2,&l3);
	
	l3 = l3 * l3;
	l1 = l1 * l1;
	l2 = l2 * l2;
	
	if (l3 == l1 + l2 || l2 == l1 + l3 || l1 == l2 + l3){printf("E um triangulo retangulo!");} else {printf("Nao e um triangulo retangulo");}	
	return 0;
}
