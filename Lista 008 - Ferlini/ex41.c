#include <stdio.h>
#include <string.h>

int main(){
	char string[50];
	
	printf("Escreva a palavra: ");
	gets(string);
	
	int i;
	
	char temp;
	
	char invertida[50];
	
	int e = 0;
	
	for (i = strlen(string) - 1; i >= 0 ; i--){
		invertida[e] = string[i];
		e++;
	}
	
	printf("Invertida: %s\n", invertida);
	
	for (i = 0; i < strlen(string); i++){
		printf(" %c\n", string[i]);
	}
	
	return 0;
}
