#include <stdio.h>
#include <math.h>
int main(){
    
    int i = 1, a1 = -2, raz = -2, pg;
    printf(" - - mostrador de uma Pg de 10 termos com razão 2 e inicando em -2 - -\n");
    
    while (i <= 10){
        pg = (a1 * pow(raz, i-1));
        printf("o %dº termo tem valor de %d\n", i, pg);
        i++; }

        return 0;}
    


