#include <stdio.h>
#include <string.h>

int main () {

    char str_1[100], str_2[100];
    int tamanho_1, tamanho_2, letras_iguais = 0;

    printf("Digite a primeira string:\n");
    gets(str_1);
    printf("Digite a segunda string:\n");
    gets(str_2);

    tamanho_1 = strlen (str_1);
    tamanho_2 = strlen (str_2);

    if (tamanho_1 == tamanho_2) {
        for (int i = 0; i < tamanho_1; i++) {
            for (int j = 0; j < tamanho_2; j++) {
                if (str_1[i] == str_2[j]) {
                    letras_iguais += 1;
                }
            }
        }
        if (letras_iguais == tamanho_1) {
            printf("As strings são iguais.");
        }
        else {
            printf("Não são iguais.");
        }
    }
    else {
        printf("O tamanho das strings é diferente, logo não são iguais.");
    }

    return 0;
}