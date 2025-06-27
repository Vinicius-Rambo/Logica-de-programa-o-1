#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define TAM 100

int main() {

    // Definição da struct TPessoa
    struct TPessoa {
        int codigo;
        char nome[TAM];
        char genero;
        int idade;
        float altura;
        float peso;
    };

    struct TPessoa cadastro[TAM];
    int n = 0, selecionar, i, j, codBusca;
    int opAlterar;
    char continuar = 'S';

    printf("--- Sistema de Cadastro ---\n");

    do {
        printf("\nMenu:\n");
        printf("[1] Cadastrar Pessoa\n");
        printf("[2] Alterar cadastro\n");
        printf("[3] Excluir uma Pessoa\n");
        printf("[4] Mostrar cadastro especifico\n");
        printf("[5] Mostrar todos os cadastros\n");
        printf("[6] Sair\n");
        printf("Selecione: ");
        scanf("%d", &selecionar);
        
        switch(selecionar) {

            case 1:
                // Cadastro de pessoas
                if(n >= TAM) {
                    printf("Limite de cadastros atingido.\n");
                    break;
                }
                    
                //Numero de cadastro.
                printf("\nCadastro:\n");
                printf("Digite o código: ");
                scanf("%d", &cadastro[n].codigo);
                
                //Nome da pessoa
                getchar();  // Apaga o ENTER anterior
                printf("Digite o nome: ");
                fgets(cadastro[n].nome, sizeof(cadastro[n].nome), stdin);
                cadastro[n].nome[strcspn(cadastro[n].nome, "\n")] = '\0';

                do { // Genero com validador de Masculino e Feminino
                    printf("Digite o seu Sexo (M/F): ");
                    scanf(" %c", &cadastro[n].genero);
                    cadastro[n].genero = toupper(cadastro[n].genero);
                } while(cadastro[n].genero != 'M' && cadastro[n].genero != 'F');

                do{ //Idade com limitador de 0 á 150.
                printf("Digite a idade: ");
                scanf("%d", &cadastro[n].idade);
                }while(cadastro[n].idade < 0 || cadastro[n].idade >= 150);

                do{ // Altura com limitador até 2.70 M
                printf("Digite a altura (m): ");
                scanf("%f", &cadastro[n].altura);
                } while(cadastro[n].altura <= 0 || cadastro[n].altura >= 2.70);

                printf("Digite o peso (kg): ");
                scanf("%f", &cadastro[n].peso);

                n++;
                printf("Cadastro realizado com sucesso!\n");
                break;

            case 2:
            if(n == 0){
                printf("Nenhum cadastro realizado.\n");
                break;}
                
                else{
                // Alterar cadastro
                printf("Digite o código da pessoa que deseja alterar: ");
                scanf("%d", &codBusca);

                for(i = 0; i < n; i++) {
                    if(cadastro[i].codigo == codBusca) {
                        do {
                            printf("\nMenu de Alteração:\n");
                            printf("[1] Código\n[2] Nome\n[3] Gênero\n[4] Idade\n[5] Altura\n[6] Peso\n[7] Sair\n");
                            printf("Escolha o campo para alterar: ");
                            scanf("%d", &opAlterar);
                            

                            switch(opAlterar) {
                                case 1:
                                    printf("Novo código: ");
                                    scanf("%d", &cadastro[i].codigo);
                                    break;
                                case 2:
                                    getchar();  // Apaga o ENTER anterior
                                    printf("Novo nome: ");
                                    fgets(cadastro[i].nome, sizeof(cadastro[i].nome), stdin);
                                    cadastro[i].nome[strcspn(cadastro[i].nome, "\n")] = '\0';
                                    break;
                                case 3:
                                    do {
                                        printf("Novo gênero (M/F): ");
                                        scanf(" %c", &cadastro[i].genero);
                                        cadastro[i].genero = toupper(cadastro[i].genero);
                                    } while(cadastro[i].genero != 'M' && cadastro[i].genero != 'F');
                                    break;
                                case 4:
                                    printf("Nova idade: ");
                                    scanf("%d", &cadastro[i].idade);
                                    break;
                                case 5:
                                    printf("Nova altura (m): ");
                                    scanf("%f", &cadastro[i].altura);
                                    break;
                                case 6:
                                    printf("Novo peso (kg): ");
                                    scanf("%f", &cadastro[i].peso);
                                    break;
                                case 7:
                                    printf("Saindo da alteração...\n");
                                    break;
                                default:
                                    printf("Opção inválida.\n");
                            }
                        } while(opAlterar != 7);
                        break;
                    }
                }
                if(i == n)
                    printf("Código não encontrado.\n");
                }
                break;

            case 3:
                if(n == 0){
                    printf("Nenhum cadastro realizado.\n");
                    break;}

                else{
                // Excluir pessoa
                printf("Digite o código da pessoa para excluir: ");
                scanf("%d", &codBusca);

                for(i = 0; i < n; i++) {
                    if(cadastro[i].codigo == codBusca) {
                        for(j = i; j < n - 1; j++) {
                            cadastro[j] = cadastro[j + 1];
                        }
                        n--;
                        printf("Cadastro excluído.\n");
                        break;
                    }
                }
                if(i == n)
                    printf("Código não encontrado.\n");
                }
                break;

            case 4:
                if(n == 0){
                    printf("Nenhum cadastro realizado.\n");
                    break;}
                else{
                // Mostrar cadastro especifico
                printf("Digite o código da pessoa: ");
                scanf("%d", &codBusca);

                for(i = 0; i < n; i++) {
                    if(cadastro[i].codigo == codBusca) {
                        printf("\nCadastro encontrado:\n");
                        printf(" |Código: %d\n", cadastro[i].codigo);
                        printf(" |Nome: %s\n", cadastro[i].nome);
                        printf(" |Gênero: %c\n", cadastro[i].genero);
                        printf(" |Idade: %d\n", cadastro[i].idade);
                        printf(" |Altura: %.2f\n", cadastro[i].altura);
                        printf(" |Peso: %.2f\n", cadastro[i].peso);
                        break;
                    }
                }
                if(i == n)
                    printf("Código não encontrado.\n");
                }
                break;
            case 5:
                // Mostrar todos os cadastros
                if(n == 0)
                    printf("Nenhum cadastro realizado.\n");
                else {
                    printf("\nTodos os cadastros:\n");
                    for(i = 0; i < n; i++) {
                        printf("\n%dº pessoa:\n", i+1);
                        printf(" |Código: %d\n", cadastro[i].codigo);
                        printf(" |Nome: %s\n", cadastro[i].nome);
                        printf(" |Gênero: %c\n", cadastro[i].genero);
                        printf(" |Idade: %d\n", cadastro[i].idade);
                        printf(" |Altura: %.2f\n", cadastro[i].altura);
                        printf(" |Peso: %.2f\n", cadastro[i].peso);
                    }
                }
                break;

            case 6:
                printf("Saindo do programa...\n");
                break;

            default:
                printf("Opção inválida.\n");
        }

    } while(selecionar != 6);
    return 0; }
