#include <stdio.h>

int main() {

    #define TAM 10
    // Nível Novato - Posicionamento dos Navios
    // Sugestão: Declare uma matriz bidimensional para representar o tabuleiro (Ex: int tabuleiro[5][5];).
    // Sugestão: Posicione dois navios no tabuleiro, um verticalmente e outro horizontalmente.
    // Sugestão: Utilize `printf` para exibir as coordenadas de cada parte dos navios.
    int tabuleiro[TAM][TAM] = {0}; // Tabuleiro 10x10 preenchido com 0
     
    printf("   Jogo de batalha Naval\n\n");
    
    int xH = 2, yH = 3; // Navio horizontal começa em (2,3)
    int tamH = 4;

    int xV = 5, yV = 1; // Navio vertical começa em (5,1)
    int tamV = 3;

    // Posiciona navio horizontal (valor 3)
    for (int i = 0; i < tamH; i++) {
        if (yH + i < TAM) {
            tabuleiro[xH][yH + i] = 3;
        }
    }

    // Posiciona navio vertical (valor 3)
    for (int i = 0; i < tamV; i++) {
        if (xV + i < TAM) {
            tabuleiro[xV + i][yV] = 3;
        }
    }

    // Exibe o tabuleiro com cabeçalho de letras
    printf("   ");
    for (char letra = 'A'; letra < 'A' + TAM; letra++) {
        printf(" %c", letra);
    }
    printf("\n");

    for (int i = 0; i < TAM; i++) {
        printf("%2d ", i); // numeração da linha
        for (int j = 0; j < TAM; j++) {
            printf(" %d", tabuleiro[i][j]);
        }
        printf("\n");
    }

   
    return 0;
}
