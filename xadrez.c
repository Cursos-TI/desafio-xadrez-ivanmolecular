#include <stdio.h>

int main() {
    // Movimento da TORRE usando FOR
    // A Torre vai se mover 5 casas para a direita
    // Alterado o incremento usado em i para i1
    int i1;
    printf("Movimento da Torre:\n");
    for (i1 = 1; i1 <= 5; i1++) {
        printf("Movimento %d - Direita\n", i1);
    }

    printf("\n"); // Separador visual

    // Movimento do BISPO usando WHILE
    // O Bispo vai se mover 5 casas na diagonal para cima e à direita
    // Alterado o incremento usado em i para i2
    int i2 = 1;
    printf("Movimento do Bispo:\n");
    while (i2 <= 5) {
        printf("Movimento %d - Diagonal Direito\n", i2);
        i2++;
    }

    printf("\n"); // Separador visual

    // Movimento da RAINHA usando DO-WHILE
    // A Rainha vai se mover 8 casas para a esquerda
    // Alterado o incremento usado em i para i3
    int i3 = 1;
    printf("Movimento da Rainha:\n");
    do {
        printf("Movimento %d - Esquerda\n", i3);
        i3++;
    } while (i3 <= 8);

    return 0;
}