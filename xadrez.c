#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças
    // Declarando variáveis constantes para representar o número de casas que cada peça pode se mover.
    #define MOV_BISPO 5
    #define MOV_TORRE 5
    #define MOV_RAINHA 8
    #define MOV_CAVALO 1
    

    printf(" *** Desafio de Xadrez - MateCheck *** \n");

    // Implementação do Movimento do Bispo 5 casas em diagonal(Ciima e Direita).
    printf("\nBispo movimentando-se %d casas em diagonal a cima e a direita. \n", MOV_BISPO);

    // Estrutura de repetição para simular a movimentação do Bispo.
    for (int i = 0; i < MOV_TORRE; i++)
    {
        printf("Cima Direita \n"); // Simula a movimentação da peça no tabuleiro.
    }
    

    // Implementação do Movimento da Torre em 5 casas a direita.
    printf("\nTorre movimentando-se %d casas a direita. \n", MOV_TORRE);

    // Estrutura de repetição para simular a movimentação da Torre.
    for (int i = 0; i < MOV_TORRE; i++)
    {
        printf("Direita \n"); // Simula a movimentação da peça no tabuleiro.
    }
    


    // Implementação de Movimentação da Rainha 8 casas para a esquerda.
    printf("\nRainha movimentando-se %d casas a esquerda. \n", MOV_RAINHA);

    // Estrutura de repetição para simular a movimentação da Rainha.
    for (int i = 0; i < MOV_RAINHA; i++)
    {
        printf("Esquerda \n"); // Simula a movimentação da peça no tabuleiro.
    }
    

    // Nível Aventureiro - Movimentação do Cavalo em L 1 vez.
    printf("\nCavalo movimentando-se em L  2 casas a cima e 1 casa a direita \n");

    // Utilização de loops aninhados para simular a movimentação do Cavalo.

    // Loop representando a movimentação horizontal.
    int i = 0;
    while (i < MOV_CAVALO)
    {
        for(int j = 0; j < 2; j++) //Loop representando a movimentação vertical.
        {
            printf("Cima \n"); // Simula a movimentação da peça no tabuleiro verticalmente.
        }
        printf("Direita \n");

        i++;
    }
    

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
