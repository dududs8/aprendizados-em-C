#include <stdio.h>
#include <string.h>

int main () {

    char frase[100];

    printf("Digite a frase que você deseja transformar em maiúscula:\n");
    gets(frase);

    for (int i = 0; i < strlen(frase); i++) {
        if (frase[i] == ' ') {
        } 
        else {
            frase[i] -= 32;
        }
    }

    printf(" %s", frase);

    return 0;
}