#include <stdio.h>

int main(){
	int n1;
	printf("Digite o numero: ");
	scanf("%d", &n1);
	
	int contador;
	
	for (contador = 0; contador <= 10; contador++){
		printf("%d X %d = %d\n", n1, contador, (n1*contador));
	}
	
	return 0;
}
