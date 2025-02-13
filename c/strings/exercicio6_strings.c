#include <stdio.h>
#include <string.h>

int main () {
    char frase[100];
    int contador = 0;

    printf("Digite a frase que você deseja contar os espaços:\n");
    gets(frase);

    for (int i = 0; i < strlen(frase); i++) {
        if (frase[i] == ' ') {
            contador += 1;
            for (int j = i; j < strlen(frase); j++){
                frase[j] = frase[j + 1];
            }
            i--;
        }
    }

    printf("O número de espaços é %d\n", contador);
    printf("A frase sem espaços é:\n %s", &frase);

    return 0;
}