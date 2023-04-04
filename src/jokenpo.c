#include <stdio.h>
#include <stdlib.h>


int main(){
    int opcao_usuario; //1-pedra 2-papel 3-tesoura
    int opcao_computador;
    int jogar_novamente=1; //1-sim 0-não

    while(jogar_novamente==1){

        printf("Digite a sua opção (1-pedra; 2-papel; 3-tesoura):\n");
        scanf("%d",&opcao_usuario);

        opcao_computador = (rand()%3)+1; //utilizamos a função rand para gerar números aleatórios

        if(opcao_usuario==opcao_computador){
            printf("Empate!!\n");
        }else if(opcao_usuario==1 && opcao_computador==3){
            printf("Usuário ganhou!!\n");
        }else if(opcao_usuario==2 && opcao_computador==1){
            printf("Usuário ganhou!!\n");
        }else if(opcao_usuario==3 && opcao_computador==2){
            printf("Usuário ganhou!!\n");
        }else{
            printf("Computador ganhou!!\n");
        }
        printf("Deseja jogar novamente (1-sim;0-não):\n");
        scanf("%d",&jogar_novamente);
    }
    printf("Terminou!\n");
}
