#include <stdio.h> 
   int main () {
    
    int adicao, subtrair, multiplicar, divisao, num1, num2;
      printf("qual é o primeiro numero?");
       scanf("%d",&num1);
      
      printf("qual é o segundo numero?");
       scanf("%d",&num2);

       adicao = num1 + num2;
       subtrair = num1 - num2;
       multiplicar = num1 * num2;
       divisao = num1 / num2; 

printf("soma:%d\n", adicao);
printf("subtrair:%d\n", subtrair);
printf("multiplicar:%d\n", multiplicar);
printf("divisão:%d\n", divisao);

return 0;
   }