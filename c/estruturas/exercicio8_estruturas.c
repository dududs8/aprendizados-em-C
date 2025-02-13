#include <stdio.h>
#include <string.h>

struct Dados {

    char nome[100], endereco[100];
    int telefone;

};

int main() {

    struct Dados info[5];
    struct Dados temp;
    int i, j;

    for (i = 0; i < 5; i++) {
        printf("Entre com o nome da pessoa %d: ", i + 1);
        scanf(" %[^\n]s", info[i].nome);

        printf("Entre com o endereco da pessoa %d: ", i + 1);
        scanf(" %[^\n]s", info[i].endereco);

        printf("Entre com o telefone da pessoa %d: ", i + 1);
        scanf("%d", &info[i].telefone);
    }

    for (i = 0; i < 4; i++) {
        for (j = i + 1; j < 5; j++) {
            if (strcmp(info[i].nome, info[j].nome) > 0) {
                temp = info[i];
                info[i] = info[j];
                info[j] = temp;
            }
        }
    }

    printf("\nDados em ordem alfabetica:\n");
    for (i = 0; i < 5; i++) {
        printf("Nome: %s\n", info[i].nome);
        printf("Endereco: %s\n", info[i].endereco);
        printf("Telefone: %d\n\n", info[i].telefone);
    }

    return 0;
}