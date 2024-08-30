#include <stdio.h>

int main(){
	
	char a, c;
	char b;
	char temp;

	printf("Digite a segunda letra: ");
	scanf("%s", b);
	
	printf("Digite a primeira letra: ");
	scanf("%s", &a);
	

	printf("Digite a terceira letra: ");
	scanf("%s", &c);
	
	if (a > b){
		temp = a;
		a = b;
		b = temp; 
	}
	
	if (a > c){
		temp = a;
		a = c;
		c = temp; 
	}
	
	if (b > c){
		temp = b;
		b = c;
		c = temp;	
	}
	
	printf("%c", a);
	printf("%c", b);
	printf("%c", c);

	return 0;
}
