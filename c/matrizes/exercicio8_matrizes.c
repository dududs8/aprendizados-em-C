#include <stdio.h>

int main () {
    int vetor[10];

    for (int i = 0; i < 10; i++) {
        printf("Digite o número %d:\n", i + 1);
        scanf("%d", &vetor[i]);
        for (int j = 0; j < i; j++) {
            if (vetor[i] == vetor[j]) {
                i --;
                printf("Número igual, digite outro:\n");
            }
        }
        if (i == 9) {
            printf("O vetor final digitado foi %d\n", vetor[9]);
        }
    }
    printf("Vetor:\n");
    for (int i = 0; i < 10; i++) {
        printf("%d ", vetor[i]);
    }

    return 0;
}