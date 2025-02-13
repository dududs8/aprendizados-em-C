#include <stdio.h>

int potencia (int base, int expoente) {
    return pow(base,expoente);
}

int main() {

    int base, expoente, resultado;

    printf("Digite a base:\n");
    scanf("%d", &base);
    printf("Digite o expoente:\n");
    scanf("%d", &expoente);

    if (expoente < 1) {
        printf("Erro.");
        return 1;
    }

    resultado = potencia(base, expoente);

    printf("O resultado de %d elevado a %d e %d.", base, expoente, resultado);

    return 0;
}