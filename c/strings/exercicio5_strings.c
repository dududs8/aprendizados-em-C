#include <stdio.h>
#include <string.h>

int main () {

    char palavra[100], letra;
    int contador = 0;

    printf("Digite a palavra que você deseja contar as vogais:\n");
    gets(palavra);

    for (int j = 0; j < strlen(palavra); j++) {
        if (palavra[j] == ('a') || palavra[j] == ('e') || palavra[j] == ('i') || palavra[j] == ('o') || palavra[j] == ('u')) {
            contador += 1;
        }
    }

    printf("A palavra possui %d vogais.\n", contador);

    printf("Digite a letra desejada:\n");
    scanf(" %c", &letra);

    for (int j = 0; j < strlen(palavra); j++) {
        if (palavra[j] == ('a') || palavra[j] == ('e') || palavra[j] == ('i') || palavra[j] == ('o') || palavra[j] == ('u')) {
            palavra[j] = letra;
        }
    }

    printf("A palavra com as vogais substituídas pela letra %c é: %s\n", letra, palavra);

    return 0;
}