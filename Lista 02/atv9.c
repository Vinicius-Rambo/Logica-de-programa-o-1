#include <stdio.h>
    int main () {

        float num1, num2, num3, num4, media;
        printf("Qual seu primeiro numero?");
        scanf("%f",&num1);

        printf("Qual seu segundo numero?");
        scanf("%f",&num2);

        printf("Qual seu terceiro numero?");
        scanf("%f",&num3);

        printf("Qual seu quarto numero?");
        scanf("%f",&num4);

media = (num1 + num2 + num3 + num4) / 4;

printf("Sua media é %.2f", media);

return 0; }