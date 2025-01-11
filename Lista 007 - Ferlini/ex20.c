#include <stdio.h>

int main(){
	
	int ano;
	
	printf("Digite o ano: ");
	scanf("%d", &ano);
	
	if ((!(ano%4) && (ano%100)) || (!(ano%4) && !(ano%400))){
		printf("E bissexto!");
	} else {
		printf("Nao e bissexto!");
	}
	
	return 0;
}
