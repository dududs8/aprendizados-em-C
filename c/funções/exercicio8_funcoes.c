#include <stdio.h>

int zero (int num) {

    if (num > 0) {
        return 1;
    }
    else if (num == 0) {
        return 0;
    }
    else {
        return -1;
    }

}

int main () {

    int num, resultado;

    printf("Digite o número que você deseja saber se é positivo, negativo ou zero.\n");
    scanf("%d", &num);

    resultado = zero (num);

    printf("%d", resultado);

    return 0;
}