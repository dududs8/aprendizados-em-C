#include <stdio.h>
#include <string.h>

int main() {

    char numero[100];
    int tamanho, contador = 0;

    printf("Digite um número:\n");
    gets(numero);

    tamanho = strlen(numero);

    for (int i = 0; i < tamanho; i++) {
        if (numero[i] == '1') {
            contador += 1;
        }
    }

    if (contador == 0) {
        printf("O número um não foi digitado nenhuma vez.");
    }
    else {
        printf("O número de vezes que o número um apareceu foi %d vezes.", contador);
    }

    return 0;
}