#include <stdio.h>

int main() {
    long int numero, fatorial = 1;

    scanf("%li", &numero);

    for(long int i = numero; i > 0; i--) {
        fatorial = fatorial * i;
    }

    printf("Fatorial de %li é %li\n", numero, fatorial);

    return 0;
}
     