#include <stdio.h>
#include <string.h>

struct  Dados {

    char nome[100], sexo, data_nasc[10], cargo[30];
    int idade, cpf, codigo, salario;

};

int main () {

    struct Dados ficha;

    printf("Digite o nome do funcionário:\n");
    fgets(ficha.nome, sizeof(ficha.nome), stdin);
    ficha.nome[strcspn(ficha.nome, "\n")] = 0;
    printf("Digite sua idade:\n");
    scanf("%d", &ficha.idade);
    printf("Digite o seu sexo (M/F):\n");
    scanf(" %c", &ficha.sexo);
    printf("Digite o seu CPF:\n");
    scanf("%d", &ficha.cpf);
    getchar();
    printf("Digite a sua data de nascimento (DD/MM/AAAA):\n");
    fgets(ficha.data_nasc, sizeof(ficha.data_nasc), stdin);
    ficha.data_nasc[strcspn(ficha.data_nasc, "\n")] = 0;
    printf("Digite o seu setor (0-99):\n");
    scanf("%d", &ficha.codigo);
    if (ficha.codigo > 99 || ficha.codigo < 0) {
        printf("Setor inválido.");
        return 1;
    }
    getchar();
    printf("Digite o seu cargo:\n");
    fgets(ficha.cargo, sizeof(ficha.cargo), stdin);
    ficha.cargo[strcspn(ficha.cargo, "\n")] = 0;
    printf("Digite o seu salário:\n");
    scanf("%d", &ficha.salario);

    printf("Nome:%s\nIdade:%d\nSexo:%c\nCPF:%d\nData de nascimento:%s\nCódigo do setor:%d\nCargo:%s\nSalário:%d", ficha.nome, ficha.idade, ficha.sexo, ficha.cpf, ficha.data_nasc, ficha.codigo, ficha.cargo, ficha.salario);

    return 0;
}