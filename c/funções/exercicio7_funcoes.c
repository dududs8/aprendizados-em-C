#include <stdio.h>

int par (int num) {

    if (num % 2 == 0) {
        return 1;
    }
    else {
        return 0;
    }

}

int main () {

    int num, resultado;

    printf("Digite o número que você deseja saber se é par:\n");
    scanf("%d", &num);

    resultado = par (num);

    printf("%d", resultado);

    return 0;
}