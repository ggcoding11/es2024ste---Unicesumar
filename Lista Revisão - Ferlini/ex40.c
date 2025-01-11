#include <stdio.h>
#include <string.h>

int main(){
	char str[50];
	char temp;
	int numero;

	printf("Digite um numero: ");
	scanf("%d", &numero);
		
	sprintf(str, "%d", numero);
	
	int i, e;
	
	for (i = 0, e = strlen(str) - 1; i < e; i++){
		temp = str[i];
		str[i] = str[e];
		str[e] = temp;
		e--;
	}
	
	printf("%s", str);
	
	return 0;
}
