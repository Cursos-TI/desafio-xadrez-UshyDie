#include <stdio.h>

// Desafio de Xadrez - MateCheck

//  Função recursiva  responsável pela movimentação da Torre.
void moverTorre(int casas){
    if (casas > 0) // Enquanto o número de casas for superior a zero, será chamada a recursividade.
    {
        printf("Direita \n"); // Impressão que simula a movimentação da peça.
        moverTorre(casas - 1); // Decrementação responsável pela parada da chamada da recursividade.
        
    }
}

//  Função recursiva  responsável pela movimentação da Rainha.
void moverRainha(int casas){
    if (casas > 0) // Enquanto o número de casas for superior a zero, será chamada a recursividade.
    {
        printf("Direita \n"); // Impressão que simula a movimentação da peça.
        moverRainha(casas - 1); // Decrementação responsável pela parada da chamada da recursividade.
        
    }
}

void moverBispo(int casas) {
    if(casas > 0) {

        for (int i = 0; i < 1; i++) // Loop que faz a movimentação da peça pela linha verticalmente
       {
           printf("Cima "); // Simula a movimentação da peça no tabuleiro. 

           for (int i = 0; i < 1; i++) // Loop que faz a movimentação da peça pela linha verticalmente
           {
            printf("Direita"); // Simula a movimentação da peça no tabuleiro. 
           }
            
           
       }
      printf("\n"); 
      moverBispo(casas - 1);
   }
}

int main() {
    
    // Declarando variáveis constantes para representar o número de casas que cada peça pode se mover.
    int casas_Bispo = 5;
    int casas_Torre = 5;
    int casas_Rainha = 8;
    int casas_Cavalo = 1;
    
    
    //  Movimentação das Peças

    printf(" *** Desafio de Xadrez - MateCheck *** \n");

    // Implementação do Movimento do Bispo 5 casas em diagonal(Ciima e Direita).
    printf("Bispo movimentando-se %d casas em diagonal a cima e a direita. \n", casas_Bispo);

    // Estrutura de repetição para simular a movimentação do Bispo.
    moverBispo(casas_Bispo); // Função recursiva para o Bispo
    
    printf("\n");

    // Implementação do Movimento da Torre em 5 casas a direita.
    printf("Torre movimentando-se %d casas a direita. \n", casas_Torre);

    // Estrutura recursiva para simular a movimentação da Torre.
    moverTorre(casas_Torre); // Função recursiva para a Torre
   
    printf("\n");

    // Implementação de Movimentação da Rainha 8 casas para a esquerda.
    printf("Rainha movimentando-se %d casas a esquerda. \n", casas_Rainha);

    // Estrutura de repetição para simular a movimentação da Rainha.
    moverRainha(casas_Rainha); // Função recursiva para a Rainha
    
    printf("\n");
    //  Movimentação do Cavalo em L 1 vez.
    printf("Cavalo movimentando-se em L  2 casas a cima e 1 casa a direita \n");

    // Utilização de loops aninhados para simular a movimentação do Cavalo.

    // Loop de múltiplas variáveis representando a movimentação horizontal.

    for(int i = 2, j = 0; i >= casas_Cavalo || j < 2; i--, j++ ) // Loop ocorre enquanto i(decrementado) for maior ou igual a casas_Cavalo ou j(incrementado) é menor que 2
    {
        printf("Cima \n");

        if(j == 1 ) { // condicional que faz a impressão da movimentação para a direita
            printf("Direita \n");
        }
            
    }

        
   

    return 0;
}
