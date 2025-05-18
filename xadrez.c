#include <stdio.h>

int main() {

    int j = 1, k = 1;

    // Movimentação da torre: 5 casas para a direita
    printf("Movimentação da torre\n\n");
    for (int i = 1; i <= 5; i++)
    {
        printf("%d. Direita\n", i);
    }

    // Movimentação da rainha: 8 casas para a esquerda
    printf("\nMovimentação da rainha\n\n");
    do
    {
        printf("%d. Esquerda\n", j);
        j++;
    } while (j <= 8);

    // Movimentação do bispo: 5 casas para cima e direita
    printf("\nMovimentação do bispo\n\n");
    while (k <= 5)
    {
        printf("%d. Cima, Direita\n", k);
        k++;
    } 
    
    return 0;
}
