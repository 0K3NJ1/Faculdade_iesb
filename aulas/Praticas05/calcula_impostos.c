#include <stdio.h>

int main() {
    // d) Declaração das constantes
    const float ICMS = 0.17;
    const float COFINS = 0.076;
    const float PIS_PASEP = 0.0165;

    // e) Declaração da variável de entrada
    float preco_inicial;

    // f) Leitura do valor
    printf("Digite o preço inicial do produto: R$ ");
    scanf("%f", &preco_inicial);

    // g, h, i) Cálculo dos impostos
    float valor_icms = ICMS * preco_inicial;
    float valor_confis = COFINS * preco_inicial;
    float valor_pis_pasep = PIS_PASEP * preco_inicial;

    // Cálculo do preço final
    float preco_final = preco_inicial + valor_icms + valor_confis + valor_pis_pasep;

    // j) Impressão formatada
    printf("\nPreço Inicial..........: R$ %.2f\n", preco_inicial);
    printf("Valor ICMS (17%%).......: R$ %.2f\n", valor_icms);
    printf("Valor COFINS (7,6%%)....: R$ %.2f\n", valor_confis);
    printf("Valor PIS/PASEP (1,65%%): R$ %.2f\n", valor_pis_pasep);
    printf("Preço Final............: R$ %.2f\n", preco_final);

    return 0;
}
