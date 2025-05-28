#include <stdio.h>

int main(){
    float total, final, diferenca, Valor_parcela;
    int opcao, parcelas;
 
    printf("Digite o valor total de sua compra: ");
    scanf("%f", &total);

    printf("\nEscolha uma forma de pagamento: \n");

    printf(" 1 - À vista                             (15%% de desconto)\n");
    printf(" 2 - Cheque para 30 dias                 (10%% de desconto)\n");
    printf(" 3 - Parcelado em 3 vezes                (5%% de desconto)\n"); 
    printf(" 4 - Parcelado em 6 vezes                (não possui desconto)\n");
    printf(" 5 - Parcelado em 12 vezes               (8%% de acréscimo)\n");

    printf("\nQual a opção desejada (1 a 5): ");
    scanf("%d", &opcao);

    switch(opcao){
        case 1:
            final = total * 0.85;
            parcelas = 1;   
            break;
        case 2:
            final = total * 0.9;
            parcelas = 1;   
            break;
        case 3: 
            final = total * 0.95;    
            parcelas = 3; 
            break;
        case 4: 
            final = total; 
            parcelas  = 6;
            break; 
        case 5: 
            final = total * 1.08;
            parcelas = 12;
            break;
        default:
            printf("Opção inválida.\n");
            return 0;/*Codigo é finalizado se for invalido.*/
    }    

    diferenca = total - final;

    printf("\nValor original da compra: R$ %.2f\n", total);
    printf("Valor final da compra: R$ %.2f\n", final);
        
    if(diferenca > 0){
        printf("Você recebeu um desconto de: R$ %.2f\n", diferenca);
    }
    else if(diferenca < 0){
        printf("Você pagou um acréscimo de: R$ %.2f\n", -diferenca);
    }
    else{
        printf("Não houve desconto nem acréscimo.\n");
    }

    if (parcelas > 1){
        Valor_parcela = final / parcelas;
        printf("Pagamento em %d vezes de R$ %.2f\n", parcelas, Valor_parcela);
    }        

    return 0;}
