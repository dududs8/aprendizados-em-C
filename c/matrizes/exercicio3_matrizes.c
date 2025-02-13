#include <stdio.h>

int main() {

    int mat1[3][3], produto[3][3];

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Digite o valor da linha [%d] e da coluna [%d] da matriz:\n", i + 1, j + 1);
            scanf("%d", &mat1[i][j]);
        }
    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            produto[i][j] = mat1[i][j] * 5;
        }
    }

    printf("O valor da multiplicação da matriz por 5 é igual a:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", produto[i][j]);
        }
        printf("\n");
    }

    return 0;
}