#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Dados {

    int matricula;
    char nome[100], curso[100];

};

int main () {

    struct Dados aluno[5];

    for (int i = 0; i < 5; i++) {
        printf("Digite o nome do aluno %d:\n", i + 1);
        fgets(aluno[i].nome, sizeof(aluno[i].nome), stdin);
        aluno[i].nome[strcspn(aluno[i].nome, "\n")] = 0;
        printf("Digite o curso do aluno %d:\n", i + 1);
        fgets(aluno[i].curso, sizeof(aluno[i].curso), stdin);
        aluno[i].curso[strcspn(aluno[i].curso, "\n")] = 0;
        printf("Digite o número de matrícula do aluno %d:\n", i + 1);
        scanf("%d", &aluno[i].matricula);
        getchar();
    }

    for (int i = 0; i < 5; i++) {
        printf("O aluno %s, do curso %s possui a matrícula %d.\n", aluno[i].nome, aluno[i].curso, aluno[i].matricula);
    }

    return 0;
}