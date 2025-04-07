#include <stdio.h>
    int main () {
        int num1, antecessor, sucessor;
        printf("Qual é seu numero?");
        scanf("%d",&num1);

antecessor = num1 - 1;
sucessor = num1 + 1;
 
 printf("Seu antecessor é %.2d e seu sucessor é %.2d", antecessor, sucessor);

 return 0; }

