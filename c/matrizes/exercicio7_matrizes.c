#include <stdio.h>

int main () {

    char mat[5][10], respostas[10];
    int nota[5];

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 10; j++) {
            printf("Digite a resposta do aluno %d na questão %d:\n", i + 1, j + 1);
            scanf(" %c", &mat[i][j]);
        }
    }

    for (int j = 0; j < 10; j++) {
        printf("Digite a resposta da questão %d:\n", j + 1);
        scanf(" %c", &respostas[j]);
    }

    for (int i = 0; i < 5; i++) {
        nota[i] = 0;
        for (int j = 0; j < 10; j++) {
            if (respostas[j] == mat[i][j]) {
                nota[i] += 1;
            }
        }
    }

    printf("Notas:\n");
    for (int i = 0; i < 5; i++) {
        printf("A nota do aluno %d foi de %d pontos.\n", i + 1, nota[i]);
    }

    return 0;
}