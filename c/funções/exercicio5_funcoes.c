#include <stdio.h>

int positivo (int num) {
    if (num >= 0) {
        return num;
    } else {
        printf("O número é negativo;");
        return 1;
    }
}

int soma_divisores (int num) {
    int soma = 0;
    for (int j = 1; j < num; j++) {
        if (num % j == 0) {
            soma += j;
        }
    }
    return soma;
}

int main () {
    int num[5], soma[5], i, pos;

    for (i = 0; i < 5; i++) {
        printf("Digite o número %d:\n", i + 1);
        scanf("%d", &num[i]);

        pos = positivo(num[i]);
        soma[i] = soma_divisores(num[i]);
    }

    for (i = 0; i < 5; i++) {
        printf("A soma dos divisores do número %d é %d\n", num[i], soma[i]);
    }

    return 0;
}