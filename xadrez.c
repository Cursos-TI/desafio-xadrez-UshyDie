#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças
    int casasRainha = 8;
    int casasBispo = 5;
    int casasTorre = 5;
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

    // Implementação de Movimentação do Bispo
    printf("Bispo movimentando-se %d casas. \n", casasBispo);

    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.
    int i = 1;

    do
    {
        printf("Cima Direita \n");
        i++;
    } while (i <= casasBispo);
    

    // Implementação de Movimentação da Torre
    printf("Torre movimentando-se %d casas. \n", casasTorre);

    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.
    for (int i = 0; i < casasTorre; i++)
    {
        printf("Direita \n");
    }
    


    // Implementação de Movimentação da Rainha
    printf("Rainha movimentando-se %d casas. \n", casasRainha);
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.
    int index = 1;

    while (index <= casasRainha)
    {
        printf("Esquerda \n");
        index++;
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
