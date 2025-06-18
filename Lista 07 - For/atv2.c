#include <stdio.h>
int main(){
    int i, quantidade = 0;
    float soma = 0, valor, valor_Max, valor_Min, media;

    printf("  _____  ___               _                      \n");
    printf(" |___ / / _ \\  __   ____ _| | ___  _ __ ___  ___  \n");
    printf("   |_ \\| | | | \\ \\ / / _` | |/ _ \\| '__/ _ \\/ __| \n");
    printf("  ___) | |_| |  \\ V / (_| | | (_) | | |  __/\\__ \\ \n");
    printf(" |____/ \\___/    \\_/ \\__,_|_|\\___/|_|  \\___||___/ \n\n");

    for(i = 1; i<=30; i++){
        printf("Digite o %i° número: ", i);
        scanf("%f", &valor);

        /* seta o menor e maior*/
        if(i == 1){
            valor_Max = valor;
            valor_Min = valor;
        }
        else {
            if (valor > valor_Min){ valor_Min = valor; }
            if (valor < valor_Max){ valor_Max = valor; }}

        /*Somas*/
        if(valor > 5.9){
            soma = soma + valor;
            quantidade++;}
        }
 media = soma/quantidade;
        printf(" - - - - Resultados da Simulação - - - -\n");
        printf(" Média dos valores > 5.9 :      %.2f\n", media);
        printf(" Menor valor informado   :      %.2f\n", valor_Min);
        printf(" Maior valor informado   :      %.2f\n", valor_Max);
 return 0;}   