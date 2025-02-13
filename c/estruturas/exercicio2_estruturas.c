#include <stdio.h>
#include <stdlib.h>

struct Dados {

    int idade;
    char nome[10], endereco[100];

};

int main () {

    struct Dados d1;

    printf("Digite o seu nome:\n");
    fgets( d1.nome, sizeof( d1.nome), stdin);
    printf("Digite o seu endereço:\n");
    fgets( d1.endereco, sizeof( d1.endereco), stdin);
    printf("Digite a sua idade:\n");
    scanf(" %d", &d1.idade);
    printf("Seu nome é %s, mora no endereço %s e tem %d anos.", d1.nome, d1.endereco, d1.idade);

    return 0;
}