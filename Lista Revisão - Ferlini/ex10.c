#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int num;
	printf("Digite um número: ");
	scanf("%d", &num);
	
	int i;
	
	printf("Impares até %d: ", num);
	
	for (i = 1; i < num; i+=2){	
		printf("%d", i);
		if (i + 2 < num){
			printf("/ ");
		}	
	}
	
	return 0;
}
