#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int num;
	
	printf("Digite um número: ");
	scanf("%d", &num);
	
	int i;
	
	int n1 = 1;
	int n2 = 1;
	
	if (num < 1){
		printf("Valor inválido!");
	} else {
		if (num == 1){
			printf("%d ", n1);
		} else {
			printf("%d %d ", n1, n2);
		}
		
		for (i = 3; i <= num; i++){
			int temp = n1 + n2;
			printf("%d ", temp);
			
			n1 = n2;
			n2 = temp;
		}	
	}
	
	return 0;
}
