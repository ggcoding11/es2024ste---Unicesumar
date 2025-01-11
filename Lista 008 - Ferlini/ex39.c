#include <stdio.h>

int main(){
	int num;
	
	printf("Digite o número: ");
	scanf("%d", &num);
	
	int digitos[10];
	int i = 0;
	
	while (num){
		digitos[i] = num%10;
		num = num/10;
		i++;
	}
	
	int e;
	
	for(e = i - 1; e >= 0; e--){
		printf("%d/ ", digitos[e]);
	}
	
	return 0;
}
