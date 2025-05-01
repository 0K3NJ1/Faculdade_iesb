#include <stdio.h>

int main() {
    float temperatura;

    // Leitura da temperatura
    printf("Digite a temperatura: ");
    scanf("%f", &temperatura);

    // Verificação das faixas de temperatura
    if (temperatura > 40.0f) {
        printf("Muito quente\n");
    } else if (temperatura > 30.0f && temperatura < 40.0f) {
        printf("Quente\n");
    } else if (temperatura > 20.0f && temperatura < 30.0f) {
        printf("Agradavel\n");
    } else if (temperatura < 20.0f) {
        printf("Frio\n");
    }

    return 0;
}