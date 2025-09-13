#include <stdio.h>

int main() {
    // ==============================
    // Torre - usando FOR
    // ==============================
    int casasTorre = 5; // número de casas que a Torre vai se mover
    printf("Movimento da Torre:\n");
    for (int i = 1; i <= casasTorre; i++) {
        printf("Direita\n");
    }

    // ==============================
    // Bispo - usando WHILE
    // ==============================
    int casasBispo = 5; // número de casas que o Bispo vai se mover
    int i = 1;
    printf("\nMovimento do Bispo:\n");
    while (i <= casasBispo) {
        printf("Cima, Direita\n");
        i++;
    }

    // ==============================
    // Rainha - usando DO-WHILE
    // ==============================
    int casasRainha = 8; // número de casas que a Rainha vai se mover
    int j = 1;
    printf("\nMovimento da Rainha:\n");
    do {
        printf("Esquerda\n");
        j++;
    } while (j <= casasRainha);

    return 0;
}
