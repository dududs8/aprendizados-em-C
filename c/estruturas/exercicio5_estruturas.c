#include <stdio.h>
#include <string.h>

struct Dados {

    int matricula;
    float n1, n2, media;
    char nome[100], codigo[100];

};

int main() {

    struct Dados aluno[10];
    int num_alunos;

    printf("Quantos alunos deseja cadastrar?\n");
    scanf("%d", &num_alunos);
    if (num_alunos > 10) {
        printf("Número inválido.\n");
        return 1;
    }

    getchar();

    for (int i = 0; i < num_alunos; i++) {
        
        printf("Digite o nome do aluno %d:\n", i + 1);
        fgets(aluno[i].nome, sizeof(aluno[i].nome), stdin);
        aluno[i].nome[strcspn(aluno[i].nome, "\n")] = 0;
        printf("Digite o código da disciplina:\n");
        fgets(aluno[i].codigo, sizeof(aluno[i].codigo), stdin);
        aluno[i].codigo[strcspn(aluno[i].codigo, "\n")] = 0;
        printf("Digite o número de matrícula do aluno %d:\n", i + 1);
        scanf("%d", &aluno[i].matricula);
        printf("Digite a nota 1 do aluno:\n");
        scanf("%f", &aluno[i].n1);
        printf("Digite a nota 2 do aluno:\n");
        scanf("%f", &aluno[i].n2);
        getchar();

        aluno[i].media = (aluno[i].n1 * 1 + aluno[i].n2 * 2)/3;

    }

    for (int i = 0; i < num_alunos; i++) {

        printf("A média de %s foi %.2f.\n", aluno[i].nome, aluno[i].media);

    }

    return 0;
}