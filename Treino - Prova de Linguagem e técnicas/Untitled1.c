#include<stdio.h>
void main(){
	double sal, desc;
	sal = 100;
	desc =0.25;
	printf("%.2lf",(sal-=*=desc));
}
