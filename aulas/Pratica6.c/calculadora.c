#include <stdio.h>

int main() {
    char operacao;
    float numero1, numero2, resultado;

    // Leitura da operação
    printf("Digite a operacao (+, -, *, /): ");
    scanf(" %c", &operacao); // espaço antes de %c evita ler enter anterior

    // Leitura dos dois números
    printf("Digite dois numeros: ");
    scanf("%f %f", &numero1, &numero2);

    // Verificação da operação
    if (operacao == '+') {
        resultado = numero1 + numero2;
        printf("Resultado: %.2f\n", resultado);
    } else if (operacao == '-') {
        resultado = numero1 - numero2;
        printf("Resultado: %.2f\n", resultado);
    } else if (operacao == '*') {
        resultado = numero1 * numero2;
        printf("Resultado: %.2f\n", resultado);
    } else if (operacao == '/') {
        if (numero2 == 0) {
            printf("Erro: divisao por zero!\n");
        } else {
            resultado = numero1 / numero2;
            printf("Resultado: %.2f\n", resultado);
        }
    } else {
        printf("Operacao invalida!\n");
    }

    return 0;
}