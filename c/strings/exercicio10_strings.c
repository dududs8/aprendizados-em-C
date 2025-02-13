#include <stdio.h>
#include <string.h>

int main () {

    char palavra[100], palavra_contrario[100];
    int i, j, tamanho;

    printf("Digite a palavra que você deseja saber se é um palíndromo:\n");
    gets(palavra);

    tamanho = strlen(palavra);

    for (i = tamanho - 1; i >= 0; i--){
        palavra_contrario[j] = palavra[i];
        j++;
    }
    palavra_contrario[j] = '\0';

    if (strcmp(palavra, palavra_contrario ) == 0) {
        printf("É um palíndromo.");
    }
    else {
        printf("Não é um palíndromo.");
    }

    return 0;
}