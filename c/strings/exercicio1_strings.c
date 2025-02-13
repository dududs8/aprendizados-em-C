#include <stdio.h>
#include <string.h>

int main () {

    char nome[100];
    int tamanho;

    printf("Digite o seu nome:\n");
    gets(nome);

    tamanho = strlen (nome);

    if (tamanho < 4) {
        printf("O seu nome tem menos que quatro letras.");
    }
    else {
        for (int i = 0; i < 4; i++) {
            printf("%c", nome[i]);
        }
    }

    return 0;
}