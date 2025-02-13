#include <stdio.h>

int main() {

    int mat1[3][2], mat2[2][3], produto[3][3] = {0};

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 2; j++) {
            printf("Digite o valor da linha [%d] e da coluna [%d] da matriz 1:\n", i + 1, j + 1);
            scanf("%d", &mat1[i][j]);
        }
    }

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Digite o valor da linha [%d] e da coluna [%d] da matriz 2:\n", i + 1, j + 1);
            scanf("%d", &mat2[i][j]);
        }
    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            for (int k = 0; k < 2; k++) {
                produto[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }

    printf("O valor do produto das matrizes é igual a:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", produto[i][j]);
        }
        printf("\n");
    }

    return 0;
}