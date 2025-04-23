#include <stdio.h>

int main() {
    int duracao, horas, minutos, segundos;
    printf("Digite a duração em segundos: ");
    scanf("%d", &duracao);
    
    horas = duracao / 3600;
    duracao = duracao % 3600;

    minutos = duracao / 60;
    segundos = duracao % 60;
    printf("%d:%d:%d\n", horas, minutos, segundos);

return 0;
}