#include <stdio.h>

int absoluto (int num) {

    if (num < 0) {
        return num *= -1;
    }

    else {
        return num;
    }
}

int main () {

    int num[5], i, result[5];

    for (i = 0; i < 5; i++) {
        printf("Digite o número %d:\n", i + 1);
        scanf("%d", &num[i]);
        result[i] = absoluto(num[i]);
    }

    for (i = 0; i < 5; i++) {
        printf("O absoluto do número %d é %d:\n", num[i], result[i]);
    }

    return 0;
}