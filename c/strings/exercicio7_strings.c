#include <stdio.h>
#include <string.h>

int main () {

    char palavra[50];

    printf("Digite uma palavra:\n");
    gets(palavra);

    for (int i = 0; i < strlen(palavra); i++) {
        palavra[i] += 1;
    }

    printf("A nova palavra é: %s.", palavra);

    return 0;
}