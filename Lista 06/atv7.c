#include <stdio.h>
int main(){
    
    int pa = 0, razao = 3, i = 1;
    printf(" - - mostrador de uma PA de 20 termos com razão 3 - -\n");
    
    while (i <= 20){
        printf("o %dº termo tem valor de %d\n", i, pa);
        pa = pa + razao;
        i++; }

        return 0;}
    


