#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Nível Novato - Posicionamento dos Navios
    // Sugestão: Declare uma matriz bidimensional para representar o tabuleiro (Ex: int tabuleiro[5][5];).
    // Sugestão: Posicione dois navios no tabuleiro, um verticalmente e outro horizontalmente.
    // Sugestão: Utilize `printf` para exibir as coordenadas de cada parte dos navios.
    #include <stdio.h>

// VARIAVEIS

#define LINHAS 10
#define COLUNAS 10

//Tabuleiro

char tabuleiro[LINHAS][COLUNAS];

void inicializarTabuleiro(char tabuleiro[LINHAS][COLUNAS]) {
    for (int i = 0; i < LINHAS; i++) {
        for (int j = 0; j < COLUNAS; j++) {
            tabuleiro[i][j] = '~';  // Inicializa a água
        }
    }
}


// Navio Vertical

void posicionarNavioVertical(char tabuleiro[LINHAS][COLUNAS], int linha, int coluna, int tamanho)
{
    for (int i = 0; i < tamanho; i++)
    {
        tabuleiro[linha + i][coluna] = '0' + tamanho;
    }
}

// Navio Horizontal

void posicionarNavioHorizontal(char tabuleiro[LINHAS][COLUNAS], int linha, int coluna, int tamanho)
{
    for (int i = 0; i < tamanho; i++)
    {
        tabuleiro[linha][coluna + i] = '0' + tamanho;
    }
}

void imprimirTabuleiro(char tabuleiro[LINHAS][COLUNAS]) {
    // Imprimir as colunas
    printf("  ");
    for (int j = 0; j < COLUNAS; j++) {
        printf("%d ", j);
    }
    printf("\n");

    // Imprimir as linhas  e os navios
    for (int i = 0; i < LINHAS; i++) {
        printf("%d ", i);  // numero de linhas
        for (int j = 0; j < COLUNAS; j++) {
            printf("%c ", tabuleiro[i][j]);
        }
        printf("\n");
    }
}


int main() {

    inicializarTabuleiro(tabuleiro);

    // Principal
    posicionarNavioVertical(tabuleiro, 2, 3, 4);
    posicionarNavioHorizontal(tabuleiro, 5, 6, 3);

    imprimirTabuleiro(tabuleiro);

    return 0;
}

    // Nível Aventureiro - Expansão do Tabuleiro e Posicionamento Diagonal
    // Sugestão: Expanda o tabuleiro para uma matriz 10x10.
    // Sugestão: Posicione quatro navios no tabuleiro, incluindo dois na diagonal.
    // Sugestão: Exiba o tabuleiro completo no console, mostrando 0 para posições vazias e 3 para posições ocupadas.

    // Nível Mestre - Habilidades Especiais com Matrizes
    // Sugestão: Crie matrizes para representar habilidades especiais como cone, cruz, e octaedro.
    // Sugestão: Utilize estruturas de repetição aninhadas para preencher as áreas afetadas por essas habilidades no tabuleiro.
    // Sugestão: Exiba o tabuleiro com as áreas afetadas, utilizando 0 para áreas não afetadas e 1 para áreas atingidas.

    // Exemplos de exibição das habilidades:
    // Exemplo para habilidade em cone:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 1 1 1 1 1
    
    // Exemplo para habilidade em octaedro:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 0 0 1 0 0

    // Exemplo para habilidade em cruz:
    // 0 0 1 0 0
    // 1 1 1 1 1
    // 0 0 1 0 0

    return 0;
}
