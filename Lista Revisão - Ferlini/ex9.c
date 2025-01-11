#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int num;
	printf("Digite um número: ");
	scanf("%d", &num);
	
	int i;
	
	printf("Pares até %d: ", num);
	
	for (i = 2; i < num; i+=2){	
		printf("%d", i);
		if (i + 2 < num){
			printf("/ ");
		}	
	}
	
	return 0;
}
