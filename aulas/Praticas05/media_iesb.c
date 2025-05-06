#include <stdio.h>

int main() {
    float nota_a1, nota_a2;

    printf("Digite a nota da A1: ");
    scanf("%f", &nota_a1);

    printf("Digite a nota da A2: ");
    scanf("%f", &nota_a2);

    float media_iesb = nota_a1 * 0.4 + nota_a2 * 0.6;

    printf("Nota A1: %.1f\n", nota_a1);
    printf("Nota A2: %.1f\n", nota_a2);
    printf("Média IESB: %.1f\n", media_iesb);

    return 0;
}
