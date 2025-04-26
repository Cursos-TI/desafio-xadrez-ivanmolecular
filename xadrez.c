#include <stdio.h>

// Funcao recursiva para o movimento do Bispo
void movimentoBispo(int movimento) {
    if (movimento > 5) {
        return; // Termina quando ja tiver feito 5 movimentos
    }
    printf("Movimento %d - Diagonal Direita\n", movimento);
    movimentoBispo(movimento + 1); // Chama a funcao recursivamente
}

// Funcao recursiva para o movimento da Torre
void movimentoTorre(int movimento) {
    if (movimento > 5) {
        return; // Termina quando ja tiver feito 5 movimentos
    }
    printf("Movimento %d - Direita\n", movimento);
    movimentoTorre(movimento + 1); // Chama a funcao recursivamente
}

// Funcao recursiva para o movimento da Rainha
void movimentoRainha(int movimento) {
    if (movimento > 8) {
        return; // Termina quando ja tiver feito 8 movimentos
    }
    printf("Movimento %d - Esquerda\n", movimento);
    movimentoRainha(movimento + 1); // Chama a funcao recursivamente
}

// Funcao recursiva para o movimento do Cavalo
void movimentoCavalo(int movimento, int passos) {
    if (movimento > 1) {
        return; // Termina apos o movimento inicial
    }
    int i;
    // Movimento para cima (1 vez)
    printf("Movimento %d - Cima\n", passos);
    // Movimento para direita (2 vezes)
    for (i = 1; i <= 2; i++) {
        printf("Movimento %d - Direita\n", passos + i);
    }
    movimentoCavalo(movimento + 1, passos + 3); // Chama a funcao recursivamente
}

int main() {
    printf("Movimento do Bispo:\n");
    movimentoBispo(1); // Inicia o movimento do Bispo

    printf("\n"); // Separador visual

    printf("Movimento da Torre:\n");
    movimentoTorre(1); // Inicia o movimento da Torre

    printf("\n"); // Separador visual

    printf("Movimento da Rainha:\n");
    movimentoRainha(1); // Inicia o movimento da Rainha

    printf("\n"); // Separador visual

    printf("Movimento do Cavalo:\n");
    movimentoCavalo(1, 1); // Inicia o movimento do Cavalo

    return 0;
}
