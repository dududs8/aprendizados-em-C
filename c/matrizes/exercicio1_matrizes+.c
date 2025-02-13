#include <stdio.h>

int main() 
{

    int mat1[2][3], mat2[2][3], soma[2][3];

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
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

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            soma[i][j] = mat1[i][j] + mat2[i][j];
        }
    }

    printf("O valor da soma das matrizes é igual a:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", soma[i][j]);
        }
        printf("\n");
    }

    return 0;
}