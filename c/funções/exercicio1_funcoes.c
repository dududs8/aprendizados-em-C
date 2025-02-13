#include <stdio.h>

int menor (int num1, int num2) {
    
    if (num1 < num2) {
        return num1;
    }
    
    else {
        return num2;
    }

}

int main() {

    int num1, num2, men;

    printf("Digite o primeiro número:\n");
    scanf("%d", &num1);
    printf("Digite o segundo número:\n");
    scanf("%d", &num2);

    men = menor (num1, num2);

    if (num1 == num2) {
        printf("Os números são iguais.");
    }

    else{
        printf("O menor número é %d", men);
    }

    return 0;
}