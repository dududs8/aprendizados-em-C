#include <stdio.h>
#include <string.h>

int main() {

    char palavra[100];
    int tamanho;

    printf("Digite a palavra que você deseja escrever ao contrário:\n");
    gets(palavra);

    tamanho = strlen(palavra);

    for (int i = tamanho; i > -1; i--) {
        printf("%c", palavra[i]);   
    }

    return 0;
}