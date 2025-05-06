#include <stdio.h>

int main() {
    int numero1, numero2;

    printf("Digite o primeiro número inteiro: ");
    scanf("%i", &numero1);

    printf("Digite o segundo número inteiro: ");
    scanf("%i", &numero2);

    printf("%i é igual a %i? %i\n", numero1, numero2, numero1 == numero2);
    printf("%i é diferente de %i? %i\n", numero1, numero2, numero1 != numero2);
    printf("%i é menor que %i? %i\n", numero1, numero2, numero1 < numero2);
    printf("%i é menor ou igual a %i? %i\n", numero1, numero2, numero1 <= numero2);
    printf("%i é maior que %i? %i\n", numero1, numero2, numero1 > numero2);
    printf("%i é maior ou igual a %i? %i\n", numero1, numero2, numero1 >= numero2);

    return 0;
}
