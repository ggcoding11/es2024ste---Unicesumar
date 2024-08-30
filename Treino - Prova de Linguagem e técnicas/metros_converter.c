#include <stdio.h>


int main(){
	double metros;
	
	printf("Qual o valor em metros: ");
	scanf("%lf", &metros);
	
	printf("EM DECIMETROS : %.2lf\n", (metros*10));
	printf("EM CENTIMETROS : %.2lf\n", (metros*100));
	printf("EM MILIMETROS : %.2lf\n", (metros*1000));
	
	return 0;
}
