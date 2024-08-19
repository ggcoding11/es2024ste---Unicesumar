#include <stdio.h>

int main(){
	float n1, n2;
	char op;
	
	printf("Digite dois numeros e um operador: ");
	scanf("%f%c%f", &n1,&op,&n2);
	
	switch(op){
		case '+':
			printf("%f + %f = %f", n1, n2, (n1+n2));
			break;
	}

	
	
	
	
	
	
	return 0;
}
