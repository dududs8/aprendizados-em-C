#include <stdio.h>

int main() {

    int vetor[3], mat[3][3], produto[3][3];

    for (int i = 0; i < 3; i++) {
        printf("Digite o valor da linha [%d] do vetor:\n", i + 1);
        scanf("%d", &vetor[i]);
    }

    printf("Vetor:\n");
    for (int i = 0; i < 3; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Digite o valor da linha [%d] e da coluna [%d] da matriz:\n", i + 1, j + 1);
            scanf("%d", &mat[i][j]);
        }
    }

    printf("Matriz:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            produto[i][j] = vetor[i] * mat[0][j];
        }
    }

    printf("O valor da multiplicação é:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", produto[i][j]);
        }
        printf("\n");
    }

    return 0;
}