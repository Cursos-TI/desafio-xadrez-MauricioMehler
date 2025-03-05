#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código implementa os movimentos das peças de xadrez usando estruturas de repetição.

int main() {
    // Definindo os movimentos para o Cavalo
    int movimentoVertical = 2;  // 2 casas para cima
    int movimentoHorizontal = 1;  // 1 casa para a direita

    // Imprimindo uma linha em branco antes do movimento do cavalo
    printf("\nMovimento do Cavalo:\n");

    // Loop para o movimento do cavalo
    // Primeiro, mover o cavalo para cima 2 casas
    for (int i = 0; i < movimentoVertical; i++) {
        printf("Cima\n");
    }

    // Agora, mover o cavalo para a direita 1 casa
    for (int i = 0; i < movimentoHorizontal; i++) {
        printf("Direita\n");
    }

    // Movimento da Torre (5 casas para a direita)
    printf("\nMovimento da Torre:\n");
    for (int i = 0; i < 5; i++) {
        printf("Direita\n");
    }

    // Movimento do Bispo (5 casas na diagonal para cima e à direita) usando 'while'
    printf("\nMovimento do Bispo:\n");
    int k = 0;
    while (k < 5) {
        printf("Cima Direita\n");
        k++;
    }

    // Movimento da Rainha (8 casas para a esquerda) usando 'do-while'
    printf("\nMovimento da Rainha:\n");
    int l = 0;
    do {
        printf("Esquerda\n");
        l++;
    } while (l < 8);

    return 0;
}
