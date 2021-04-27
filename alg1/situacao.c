//Situação acadêmica
//Feito por Gabriel Botelho (IBGE)

#include <stdio.h>

int main(void){

	float a,b,c,d,e,media,media2;

	scanf("%f %f %f %f",&a,&b,&c,&d);
	scanf("%f",&e);

	media = ((a*2)+(b*3)+(c*4)+(d*1))/10;

	if(media >= 7){
		printf("Média:%f\n",media);
		printf("O aluno foi aprovado.\n");
	}
	if(media<5){
		printf("Média:%f\n",media);
		printf("O aluno foi reprovado.\n");
	}
	else{
		printf("Média:%f\n",media);
		printf("O aluno deve fazer o exame.\n");
		media2 = (media + e)/2;
		if(media2 > 5){
			printf("O aluno foi aprovado com média final: %f\n",media2);
		}
		if(media2 <= 4.9){
			printf("O aluno foi reprovado com média final: %f\n",media2); 
		}
	}
	return 0;
}