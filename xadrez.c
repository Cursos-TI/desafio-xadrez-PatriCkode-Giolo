#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

void movBispo(int casa){

    for(int i = 6, casa = 1; casa < i; casa++){
        
        printf("cima, ");

        for(int j = 2, casa = 1; casa < j; casa++){

            printf("direita\n");
            printf("----------------------------\n");

        }
        
        

    }


}

void movTorre(int casa){

    if(casa < 6){
        printf("Direita\n");
        printf("----------------------------\n");
        movTorre(casa + 1);
    }

}

void movRainha(int casa){

    if(casa < 9){
        printf("Esquerda\n");
        printf("----------------------------\n");
        movRainha(casa + 1);
    }

}


int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.
    int bispo = 1, torre = 1, rainha = 1;

    printf("### XADREZ ###\n\n");
    printf("Iniciando jogadas!\n\n");

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.
    
    printf("Bispo:\n");
    movBispo(bispo);
    
    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.
    
    puts("");// Imprime uma linha em branco para melhor apresentação.
    printf("Torre:\n");
    movTorre(torre);

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.
    
    puts("");
    printf("Rainha:\n");
    movRainha(rainha);

    
    
    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.
    
    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.
    puts("");
    printf("Cavalo:\n");

    for(int cima = 0, direita = 2, i = 1, j = 1; cima <= i && direita >= j; cima++, direita-- ){
        
        printf("Cima, ");

        if(cima == 1){
            //printf("caiu dentro\n");
            for(int direita = 2, k = 1; direita > k; k++ ){
                printf("Direita\n");
                printf("----------------------------\n");
                break;
            }
        }
    }
    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.
    
    return 0;
}
 