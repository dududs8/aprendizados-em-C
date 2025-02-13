#include <stdio.h>

int main() {

    int mat[4][4], maior = 0, maior_pos_i, maior_pos_j;

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            printf("Digite o valor da linha [%d] e da coluna [%d]:\n", i + 1, j + 1);
            scanf("%d", &mat[i][j]);
        }
    }

    printf("Matriz:\n");
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            if (mat[i][j] > maior) {
                maior = mat[i][j];
                maior_pos_i = i;
                maior_pos_j = j;
            }
        }
    }

    printf("O maior valor foi %d, em [%d][%d]", maior, maior_pos_i + 1, maior_pos_j + 1);

    return 0;
}