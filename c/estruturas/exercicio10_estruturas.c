#include <stdio.h>
#include <string.h>

struct Carro {
    char marca[15];
    int ano;
    float preco;
};

int main() {
    struct Carro carros[5];
    float p;
    int i;

    for (i = 0; i < 5; i++) {
        printf("Entre com a marca do carro %d (max 15 letras): ", i + 1);
        scanf(" %[^\n]s", carros[i].marca);

        printf("Entre com o ano do carro %d: ", i + 1);
        scanf("%d", &carros[i].ano);

        printf("Entre com o preco do carro %d: ", i + 1);
        scanf("%f", &carros[i].preco);
    }

    do {
        printf("\nEntre com o valor p (0 para sair): ");
        scanf("%f", &p);

        if (p == 0) {
            break;
        }

        printf("\nCarros com preco menor que %.2f:\n", p);
        int encontrou = 0;
        for (i = 0; i < 5; i++) {
            if (carros[i].preco < p) {
                printf("Marca: %s, Ano: %d, Preco: %.2f\n", carros[i].marca, carros[i].ano, carros[i].preco);
                encontrou = 1;
            }
        }

        if (!encontrou) {
            printf("Nenhum carro encontrado com preco menor que %.2f\n", p);
        }

    } while (p != 0);

    return 0;
}