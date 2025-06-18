#include <stdio.h>
int main(){
    float notas[20], soma = 0, media;
    int i, acima = 0;
printf("Programa de conferencia de notas de [0 a 10]\n");

for(i = 0; i < 20; i++){
    do{
       printf("Digite a nota do %.2d° aluno: ", i + 1);
        scanf("%f", &notas[i]);

        if(notas[i] < 0 || notas[i] > 10) {
            printf("Nota inválida! Digite uma nota entre 0 e 10.\n"); }

    } while (notas[i] < 0 || notas[i] > 10);
    soma += notas[i];
}

media = soma / 20;

for(i = 0; i<20; i++){
    if(notas[i]> media){
        acima++;}
}
printf("\n- - - Resultados - - -");
printf("\nMedia da turma: %2.f\n", media);
printf("Número de alunos com nota acima da média: %d\n\n", acima);

for(i = 0; i < 20; i++) {
    if(notas[i] > media) {
        printf("Aluno %.2d com nota %.2f\n", i + 1, notas[i]);}
}
return 0;}