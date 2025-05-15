#include <stdio.h>

int main() {
    int numero;

    scanf("%i", &numero);

    for(int i = 1; i <= 100; i++) {
        if(i % numero == 0) {
            printf("%i, ", i);
        }
    }

    return 0;
}