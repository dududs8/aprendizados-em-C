#include <stdio.h>
#include <string.h>

struct Boletim {

    float media, n1, n2, n3;
    int matricula;
    char nome[100];

};

int main () {

    struct Boletim aluno[5];
    float maior_media = 0, menor_media = 10000, maior_n1 = 0;
    char aluno_menor_media[100], aluno_maior_media[100], aluno_maior_n1[100];

    for (int i = 0; i < 5; i++) {

        aluno[i].media = 0;

        printf("Digite o nome do aluno %d:\n", i + 1);
        fgets(aluno[i].nome, sizeof(aluno[i].nome), stdin);
        aluno[i].nome[strcspn(aluno[i].nome, "\n")] = 0;
        printf("Digite o número de matrícula do aluno %d:\n", i + 1);
        scanf("%d", &aluno[i].matricula);
        printf("Digite a nota da primeira prova:\n");
        scanf("%f", &aluno[i].n1);
        printf("Digite a nota da segunda prova:\n");
        scanf("%f", &aluno[i].n2);
        printf("Digite a nota da terceira prova:\n");
        scanf("%f", &aluno[i].n3);

        aluno[i].media = (aluno[i].n1 + aluno[i].n2 + aluno[i].n3)/3;

        if (aluno[i].media < 6) {
            printf("O aluno %s foi reprovado, com media de %.2f.\n", aluno[i].nome, aluno[i].media);
        }
        else {
            printf("O aluno %s foi aprovado, com media de %.2f.\n", aluno[i].nome, aluno[i].media);
        }

        getchar();
    }

    for (int i = 0; i < 5; i++) {

        if (aluno[i].media > maior_media) {
            maior_media = aluno[i].media;
            strcpy(aluno_maior_media, aluno[i].nome);
        }
        if (aluno[i].media < menor_media) {
            menor_media = aluno[i].media;
            strcpy(aluno_menor_media, aluno[i].nome);
        }
        if (aluno[i].n1 > maior_n1) {
            maior_n1 = aluno[i].n1;
            strcpy(aluno_maior_n1, aluno[i].nome);
        }

        printf("A média de %s foi %.2f.\n", aluno[i].nome, aluno[i].media);
    }
    printf("A menor média foi de %.2f, do aluno %s, enquanto que a maior média foi de %.2f, do aluno %s.\n", menor_media, aluno_menor_media, maior_media, aluno_maior_media);
    printf("A maior nota da primeira prova foi %.2f, do aluno %s", maior_n1, aluno_maior_n1);

    return 0;
}