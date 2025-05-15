#include <stdio.h>

int main() {
    int n, anterior = 0, proximo = 1;

    scanf("%i", &n);

    for(int i = 0; i < n; i++) {
        printf("%i, ", proximo);
        int aux = proximo;
        proximo = anterior + proximo;
        anterior = aux;
    }

    return 0;
}