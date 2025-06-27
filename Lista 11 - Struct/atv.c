#include <stdio.h> 
#include <string.h>
#include <ctype.h>

#define TAM 100


int n, i, selecao;
int main(){
struct Tpessoa{
    int codigo;
    char nome[100];
    char genero;
    int idade;
    float altura;
    float peso;
};

struct Tpessoa cadastro[TAM];

printf("--- Sistema de Cadastro - - -\n");
do{
    printf("\nMenu:\n");
    printf("[1] Cadastrar Pessoa\n");
    printf("[2] Alterar cadastro\n");
    printf("[3] Excluir uma Pessoa\n");
    printf("[4] Mostrar cadastro especifico\n");
    printf("[5] Mostrar todos os cadastros\n");
    printf("[6] Sair\n");
    
    do{
    printf("Digite o número da opção: ");
    scanf("%d", &selecao);
    }while(selecao <= 0 && selecao >= 7);

    switch(selecao){
        case 1:
            printf("\nCadastro:\n");
            printf("Digite a quantidade de cadastros: ");
            scanf("%d", &n);
                for(i =0; i < n; i++){
                    
                }









    }


}while(opcao != 6)
printf("desligando programa.....");
return 0;}





    



return 0; }
