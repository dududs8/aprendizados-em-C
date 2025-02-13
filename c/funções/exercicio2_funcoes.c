#include <stdio.h>

float x (float x1, float x2) {
    return x2 - x1;
}

float y (float y1, float y2) {
    return y2 - y1;
}

int main () {

    float x1, x2, y1, y2, dist_x, dist_y;

    printf("Digite a coordenada x1:\n");
    scanf("%f", &x1);
    printf("Digite a coordenada x2:\n");
    scanf("%f", &x2);
    printf("Digite a coordenada y1:\n");
    scanf("%f", &y1);
    printf("Digite a coordenada y2:\n");
    scanf("%f", &y2);

    dist_x = x(x1, x2);
    dist_y = y(y1, y2);

    printf("A distância x entre os pontos (%.2f, %.2f) é %.2f e a distância y entre os dois pontos (%.2f, %.2f) é %.2f.", x1, x2, dist_x, y1, y2, dist_y);

    return 0;
}