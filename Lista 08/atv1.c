#include <stdio.h>
int main(){

int i, num, multiplicador;     

printf("  _        _                     _       \n");
printf(" | |_ __ _| |__  _   _  __ _  __| | __ _ \n");
printf(" | __/ _` | '_ \\| | | |/ _` |/ _` |/ _` |\n");
printf(" | || (_| | |_) | |_| | (_| | (_| | (_| |\n");
printf("  \\__\\__,_|_.__/ \\__,_|\\__,_|\\__,_|\\__,_|\n");

printf("\n Digite o seu númerador: ");
    scanf("%d", &num);

printf("Digite a quantidade de multiplicadores: ");
    scanf("%d", &multiplicador);
    printf("- - - - -  - - - - -\n");
    
    for(i = 1; i <= multiplicador; i++){
        printf("%.2d°: %d x %d = %.2d\n", i, num, i, i*num);
    }
 return 0;}       