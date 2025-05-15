#include <stdio.h>

int main () {
    int mes, ano;

    printf("Janeiro   [01]\tFevereiro [02]\tMarço    [03]\n"
           "Abril     [04]\tMaio      [05]\tJunho    [06]\n"
           "Julho     [07]\tAgosto    [08]\tSetembro [09]\n"
           "Outubro   [10]\tNovembro  [11]\tDezembro [12]\n");
    printf("\nQual a opção desejada (1 a 12): ");          
    scanf("%d", &mes);

    switch(mes){ 
        case 1:
            printf("Janeiro, o primeiro mês do ano, possui 31 dias.");
            break;
        
        case 2:
            printf("Digite o ano: ");
            scanf("%d", &ano);

            if ((ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0)) {
                printf("Fevereiro, o segundo mês do ano, possui 29 dias (ano bissexto).");
            } else {
                printf("Fevereiro, o segundo mês do ano, possui 28 dias (ano normal).");
            }
            break;

        case 3:
            printf("Março, o terceiro mês do ano, possui 31 dias.");
            break; 

        case 4:
            printf("Abril, o quarto mês do ano, possui 30 dias.");
            break; 
            
        case 5:
            printf("Maio, o quinto mês do ano, possui 31 dias.");
            break; 
            
        case 6:
            printf("Junho, o sexto mês do ano, possui 30 dias.");
            break; 
        
        case 7:
            printf("Julho, o sétimo mês do ano, possui 31 dias.");
            break; 

        case 8:
            printf("Agosto, o oitavo mês do ano, possui 31 dias.");
            break; 

        case 9:
            printf("Setembro, o nono mês do ano, possui 30 dias.");
            break; 
        
        case 10:
            printf("Outubro, o décimo mês do ano, possui 31 dias.");
            break; 
        
        case 11:
            printf("Novembro, o décimo primeiro mês do ano, possui 30 dias.");
            break;
            
        case 12:
            printf("Dezembro, o décimo segundo mês do ano, possui 31 dias.");
            break;    
        
        default: 
            printf("Digite um mês válido!");
    }

    return 0;
}
