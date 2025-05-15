#include <stdio.h>

int main() {
    int numero, maior, menor;

    scanf("%i", &numero);

    maior = numero;
    menor = numero;

    while(numero != 0) {
        if(numero > maior) {
            maior = numero;
        }
        if(numero < menor) {
            menor = numero;
        }
        scanf("%i", &numero);
    }

    printf("Maior: %i\nMenor: %i\n", maior, menor);

    return 0;
}