#include <stdio.h>
#include <string.h>

int main(){
	
	char str[50];
	char temp;
	
	printf("Escreva uma palavra: ");
	gets(str);
	
	int i, e;
	
	for (i = 0, e = strlen(str) - 1; i < e; i++){
		temp = str[i];
		str[i] = str[e];
		str[e] = temp;
		
		e--;
	}
	
	printf("Invertida: %s\n", str);
	
	printf("Cada caracter: \n");
	
	for (i = 0; i < strlen(str); i++){
		printf("%c\n", str[i]);
	}
	
	return 0;
}
