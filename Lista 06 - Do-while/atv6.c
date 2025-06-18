#include <stdio.h>
#include <ctype.h>

int main() {
    int i=1;
    float nota_a, nota_b, media;
    char continuar;

do{
    printf("\naluno %d\n", i);

    printf("Entre com a nota A: ");
    scanf("%f", &nota_a);

    printf("Entre com a nota B: ");
    scanf("%f", &nota_b);

    media= (nota_a + (nota_b *2)) / 3; // a como A tem valor de 1 não precisa multiplicar, e como é 1 e 2, o divisor é 3.
    printf("media do aluno %d = %.2f\n", i, media);

    do{
    printf("Continuar (s/n) ?");
    scanf(" %c", &continuar);
    continuar = toupper(continuar);

        if (continuar != 'S' && continuar != 'N' ){
            printf("ERRO: resposta invalida!");}

    } while (continuar != 'S' && continuar != 'N'); 
    i++;
    
} while (continuar == 'S');

i--;

printf("Alunos encerrados quantidade total: %d", i);
    return 0;}    