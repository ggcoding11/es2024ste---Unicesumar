#include <stdio.h>

int main(){
    char op;
	float n1, n2;

    printf("Digite dois numeros e um operador: ");
    scanf("%f  %c  %f", &n1, &op, &n2);
    
    switch(op) {
        case '+':
            printf("%.2f + %.2f = %.2f\n", n1, n2, n1 + n2);
            break;
        case '-':
        	printf("%.2f - %.2f = %.2f\n", n1, n2, n1 - n2);
        	break;
        case '/':
        	if (n2){
				printf("%.2f / %.2f = %.2f\n", n1, n2, n1/n2);
        		break;
			} else {
				printf("Denominador nulo");
		}
		case '*':
			printf("%.2f * %.2f = %.2f\n", n1, n2, n1*n2);
        	break;
    }
    
    return 0;
}
