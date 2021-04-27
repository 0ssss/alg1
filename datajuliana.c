//Para saber o dia da semana (de domingo a sábado) em que uma determinada data cai, pode-se fazer uso do seguinte método: 
//Dados dia, mês e ano, efetuar o seguinte cálculo:
// (1461*(ano + 4800 +(mes - 14)/12))/4+ (367 * (mes-2-12*((mes - 14)/12)))/12 - (3*((ano+4900+(mes - 14)/12)/100))/4 + dia - 32075.
//O valor obtido é conhecido como data juliana. O dia da semana é dado
//pela divisão da data juliana por 7. Tal que 0 corresponde a Segunda-feira,  1 corresponde à Terça-feira e assim sucessivamente até domingo.
//Escreva um programa em C que lê duas datas e determina, informando ao usuário, se o dia da semana é igual em ambas (ou não).
//O programa deve, ainda, informar o dia da semana sempre que esse dia for igual em ambas as datas informadas como entrada. 


//Feito por Gabriel Botelho (IBGE)
#include <stdio.h>
int main(void){

    int ano = 0,mes = 0,dia = 0;
    int ano2 = 0,mes2 = 0, dia2 = 0;
    int data,juliana,juliana2,diaSemana,diaSemana2;
 
    scanf("%d/%d/%d",&dia,&mes,&ano);
    scanf("%d/%d/%d",&dia2,&mes2,&ano2);

        juliana = (1461 * (ano + 4800 + (mes - 14) / 12)) / 4 + (367 * (mes - 2 - 12 * ((mes - 14) / 12))) / 12 - (3 * ((ano + 4900 + (mes - 14) / 12) / 100)) / 4 + dia - 32075;

        diaSemana = juliana % 7;

    

    juliana2 = (1461 * (ano2 + 4800 + (mes2 - 14) / 12)) / 4 + (367 * (mes2 - 2 - 12 * ((mes2 - 14) / 12))) / 12 - (3 * ((ano2 + 4900 + (mes2 - 14) / 12) / 100)) / 4 + dia2 - 32075;
    
    diaSemana2 = juliana2 % 7;
    
    if(diaSemana == diaSemana2){

        switch (diaSemana) {
            case 0:
                printf("Os dias da semana são iguais.\nsegunda-feira");
                break;
            case 1:
                printf("Os dias da semana são iguais.\nterça-feira");
                break;
            case 2:
                printf("Os dias da semana são iguais.\nquarta-feira");
                break;
            case 3:
                printf("Os dias da semana são iguais.\nquinta-feira");
                break;
            case 4:
                printf("Os dias da semana são iguais.\nsexta-feira");
                break;
            case 5:
                printf("Os dias da semana são iguais.\nsábado");
                break;
            case 6:
                printf("Os dias da semana são iguais.\ndomingo");
                break;
            default:
                printf("Erro!");
                break;

          }
        
    }else{
        printf("Os dias da semana são diferentes.");
 }
}