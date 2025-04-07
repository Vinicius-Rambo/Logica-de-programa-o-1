#include <stdio.h>
int main(){
    float tamanho, conexao, tempo;
    printf("Qual o tamanho do arquivo em Bits?");
    scanf("%f",&tamanho);
    printf("Qual a conexão em bits por segundo?");
    scanf("%f",&conexao);

tempo = (tamanho / conexao) /60;

printf("Seu arquivo vai demorar %.2f minutos", tempo);

return 0;}