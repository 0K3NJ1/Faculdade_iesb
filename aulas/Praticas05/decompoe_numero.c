#include <stdio.h>

int main() {
    // d) Declaração da variável
    int numero;

    // e) Leitura do número
    printf("Digite um número inteiro (até 4 dígitos): ");
    scanf("%d", &numero);

    // f) Declaração das variáveis para decomposição
    int milhares, centenas, dezenas, unidades;

    // g) Cálculos
    milhares = numero / 1000;
    centenas = (numero % 1000) / 100;
    dezenas  = (numero % 100) / 10;
    unidades = numero % 10;

    // h) Impressão formatada
    printf("O número %d é decomposto em %d milhar(es), %d centena(s), %d dezena(s) e %d unidade(s).\n",
           numero, milhares, centenas, dezenas, unidades);

    return 0;
}
