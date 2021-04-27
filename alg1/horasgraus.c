//Adolfo possui um relógio com design moderno que utiliza o sistema de exibição de horas analógico, por meio de ponteiros.
//s projetistas do relógio decidiram que a aparência do relógio seria melhor se
//não fossem utilizados os marcadores de traços e números no fundo,
//privilegiando a aparência em detrimento da funcionalidade. Ou seja, o fundo do visor onde estão os ponteiros
// é preenchido por uma cor sólida.
//privilegiando a aparência em detrimento da funcionalidade. Ou seja, o fundo do visor onde estão os ponteiros é preenchido por uma cor sólida.
//Ele decidiu, então, utilizar um instrumento para medir os ângulos formados pelos ponteiros de hora e de minuto.
//Com os ângulos dos ponteiros de horas e minutos é possível calcular a hora exibida no relógio. 
//Escreva um programa em C que calcula a hora e o minuto do momento de uma medição feita por Adolfo.
//Em 00h00m, os dois ângulos são iguais a zero.
//Além disso considere que ambos os ponteiros só se movimentam quando uma unidade de tempo (hora ou minuto) é completa.
//O primeiro valor de ângulo informado como entrada corresponde às horas e
//o segundo valor de ângulo informado como entrada corresponde aos minutos.


//Feito por Gabriel Botelho (IBGE)

#include <stdio.h>
int main(void){

        int grauminuto = 360/60,minuto = 0,hora = 0,i = 0,grauhora = 360/12;
        int grauponteiroH,grauponteiroM;

       	scanf("%d",&grauponteiroH);
		scanf("%d",&grauponteiroM);

        for(int i = 0; i < 60; i++){
            if(grauponteiroM >= grauminuto * i && grauponteiroM < grauminuto * (i+1)){
                minuto = i;
            }
        }

        for(int i = 0; i < 12; i++){
            if(grauponteiroH >= grauhora * i && grauponteiroH < grauhora * (i+1)){
                hora = i;
            }
        }

       printf("%dh%dm",hora,minuto);
    }