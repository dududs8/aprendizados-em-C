#include <stdio.h>
#include <string.h>

int main () {

    char frase[100];

    printf("Digite a frase que você deseja traduzir na cifra de césar:\n");
    gets(frase);

    for (int i = 0; i < strlen(frase); i++) {
        if (frase[i] == ' '){
        }
        else {
            frase[i] += 3;
        }
    }

    printf("A frase ficou: %s", frase);

    return 0;
}