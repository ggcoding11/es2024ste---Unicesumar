#include <stdio.h>
#include <string.h>
#include <locale.h>


int main(){
	setlocale(LC_ALL, "Portuguese");
	char pedro[10];
	char caractere[1];
	int i;
	int vogais = 0;
	
	printf("Digite uma palavra de no máximo 10 letras: ");
	gets(pedro);
	
	for (i = 0; i < strlen(pedro); i++){
		caractere[1] = pedro[i];
		
		if (caractere[1] == 'a' || caractere[1] == 'e' || caractere[1] == 'i' || caractere[1] == 'o' || caractere[1] == 'u'){
			vogais++;
		}
	} 
	
	printf("%d vogais", vogais);
	
	
	
	
	return 0;
}
