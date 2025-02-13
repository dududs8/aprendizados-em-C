#include <stdio.h>
#include <string.h>

struct Aluno {

    char nome[50];
    int matricula;
    float media;

};

int main() {
    struct Aluno alunos[10], aprovados[10], reprovados[10];
    int i, num_aprovados = 0, num_reprovados = 0;
    float media_minima = 5.0;

    for (i = 0; i < 10; i++) {
        printf("Entre com o nome do aluno %d: ", i + 1);
        scanf(" %[^\n]s", alunos[i].nome);

        printf("Entre com a matricula do aluno %d: ", i + 1);
        scanf("%d", &alunos[i].matricula);

        printf("Entre com a media do aluno %d: ", i + 1);
        scanf("%f", &alunos[i].media);
    }

    for (i = 0; i < 10; i++) {
        if (alunos[i].media >= media_minima) {
            aprovados[num_aprovados++] = alunos[i];
        } else {
            reprovados[num_reprovados++] = alunos[i];
        }
    }

    printf("\nAlunos Aprovados:\n");
    for (i = 0; i < num_aprovados; i++) {
        printf("Nome: %s, Matricula: %d, Media: %.2f\n", 
               aprovados[i].nome, aprovados[i].matricula, aprovados[i].media);
    }

    printf("\nAlunos Reprovados:\n");
    for (i = 0; i < num_reprovados; i++) {
        printf("Nome: %s, Matricula: %d, Media: %.2f\n", 
               reprovados[i].nome, reprovados[i].matricula, reprovados[i].media);
    }

    return 0;
}