#include <stdio.h>

int main(){
	FILE *ponteiro;
	
	ponteiro = fopen("arquivonumeros.txt", "w+");
	
	int i;
	
	float num;
	
	for (i = 0; i < 10; i++){
		printf("Digite um numero: ");
		scanf("%d", &num);
		
		fprintf(ponteiro, "%f, ", num);
	}
	
	rewind(ponteiro);
	
	float media = 0;
	
	while(fscanf(ponteiro, "%f,", &num) == 1){
		printf("%f\n", num);
		media += num/10;
	}
	
	printf("Media: %.2f", media);
	
	fclose(ponteiro);
	
	return 0;
}
