#include <stdio.h>

int main (void){

float num1,num2;
char operador;

scanf("%f %f %s",&num1,&num2,&operador);
	switch (operador)
	{
	case '+':
		printf ("%.2f", num1+num2);
		break;
	case '-':
		printf ("%.2f", num1-num2);
	break;
	case '*':
		printf ("%.2f", num1*num2);
	break;
	case '/':
		if(num2==0){
    		printf("Erro: tentativa de divisão por zero.");
		}else{
    		printf ("%.2f", num1/num2);
		}
	break;
	default:
		printf ("Erro:operação inválida.");
	}

	return(0);
}