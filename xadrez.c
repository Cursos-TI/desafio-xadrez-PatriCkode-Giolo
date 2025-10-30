#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.
    int bispo = 1, torre = 1, rainha = 1;

    printf("### XADREZ ###\n\n");
    printf("Iniciando jogadas!\n\n");

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.
    while (bispo <= 5)
    {
        
        if (bispo == 1){
            printf("### Bispo ###:\nCima\nDireita\n\n");
            printf("----------------------------\n");    
        }
        
        printf("Bispo:\nCima\nDireita\n\n");
        printf("----------------------------\n");
        bispo++;
        
    }
    
    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.
    do{
        
        if (torre == 1){
            printf("### Torre ###: Direita\n");    
        }
        
        printf("Torre: Direita\n");
        printf("----------------------------\n");
        torre++;

    }while(torre <= 5);
    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.
    for (rainha ; rainha <= 7; rainha++)
    {
        
        if(rainha == 1){
            printf("### Rainha ###: Esquerda\n");
            printf("----------------------------\n");
        }
        
        printf("Rainha: Esquerda\n");
        printf("----------------------------\n");
    }
    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
 