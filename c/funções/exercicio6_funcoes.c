#include <stdio.h>

int resultado(int nota[3], char escolha) {

    int media = 0;

    for (int i = 0; i < 3; i++) {
        printf("Digite a nota %d:\n", i + 1);
        scanf("%d", &nota[i]);

        media += nota[i];

    }

    switch (escolha) {
        case 'a':
            media = media / 3;
            return media;
        
        case 'p':
            nota[0] *= 5;
            nota[1] *= 3;
            nota[2] *= 2;
            media = (nota[0] + nota[1] + nota[2]) / 10;
            return media;

        case 'h':
            media = 3 / (1.0 / nota[0] + 1.0 / nota[1] + 1.0 / nota[2]);
            return media;

        default:
            printf("Escolha inválida.\n");
            return 0;
    }
}

int main() {

    int nota[3], calculo;
    char escolha;

    printf("Digite 'a' para a média aritmética, 'p' para ponderada e 'h' para harmônica:\n");
    scanf(" %c", &escolha);

    calculo = resultado(nota, escolha);

    printf("O resultado é: %d\n", calculo);

    return 0;
}