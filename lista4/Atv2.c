#include <stdio.h>
int main () {
    int num;
    printf("Digite seu número para verificarmos se é multiplo de 3: ");
       scanf("%d", &num);

    if(num % 3 == 0){
        printf("Seu número é multiplo de 3");}
        
        else
        printf("%d não é um multiplo de 3",num);


return 0;
}    