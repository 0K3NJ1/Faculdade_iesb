#include <stdio.h>

int main() {
    int p, q;

    printf("Digite o valor lógico de p (0 ou 1): ");
    scanf("%i", &p);

    printf("Digite o valor lógico de q (0 ou 1): ");
    scanf("%i", &q);

    printf("%i && %i = %i\n", p, q, p && q);
    printf("%i || %i = %i\n", p, q, p || q);
    printf("!%i = %i\n", p, !p);
    printf("!%i = %i\n", q, !q);

    return 0;
}
