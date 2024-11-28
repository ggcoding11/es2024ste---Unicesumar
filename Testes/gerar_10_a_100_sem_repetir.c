#include <stdio.h>
#include <time.h>
#include <stdlib.h>


int main(){
	srand(time(0));
	
	int i, e;
	
	int v1[10], valor;
	
	for (i = 0; i < 10; i++){
		
		do {
			valor = (rand() % (100 - 10 + 1) + 10);
			
			for (e = 0; e < i; e++){
				if (v1[e] == valor){
					break;
				}
			}
		} while (e < i); 
	
		v1[i] = valor;
	}
	
	for (i = 0; i < 10; i++){
		printf("%d\n", v1[i]);
	}
	
	return 0;
}
