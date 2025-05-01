#include <stdio.h>
#include <math.h>

int main() {
    int a, b, c;

    // Leitura dos coeficientes a, b e c
    printf("Digite os coeficientes a, b e c: ");
    scanf("%d %d %d", &a, &b, &c);

    // Cálculo do delta
    float delta = b*b - 4*a*c;

    // Verificação do valor de delta
    if (delta < 0) {
        printf("A equacao nao tem raizes reais.\n");
    } else {
        float x1 = (-b + sqrt(delta)) / (2*a);
        float x2 = (-b - sqrt(delta)) / (2*a);
        printf("As raizes da equacao sao: x1 = %.2f e x2 = %.2f\n", x1, x2);
    }

    return 0;
}