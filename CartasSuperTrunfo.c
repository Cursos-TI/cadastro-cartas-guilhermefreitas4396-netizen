#include <stdio.h>

int main() {
    // Card 1
    char estado[3];
    char codigocarta[10];
    char nomecidade[50];
    unsigned long int populacao;
    float area;
    float pib;
    int quantpontoturistico;

    // Card 2
    char estado2[3];
    char codigocarta2[10];
    char nomecidade2[50];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int quantpontoturistico2;

    // Cálculos
    float densidade1, densidade2;
    float percapta1, percapta2;
    float superpoder1, superpoder2;

    printf("************************* CADASTRO CIDADES *************************\n");

    // ===== CIDADE 01 =====
    printf("********** CIDADE 01 ********\n");

    printf("SIGLA DO ESTADO: ");
    scanf("%2s", estado);

    printf("CODIGO DA CARTA: ");
    scanf("%9s", codigocarta);

    printf("NOME DA CIDADE: ");
    scanf("%49s", nomecidade);

    printf("POPULACAO: ");
    scanf("%lu", &populacao);

    printf("AREA TOTAL: ");
    scanf("%f", &area);

    printf("PIB: ");
    scanf("%f", &pib);

    printf("PONTOS TURISTICOS: ");
    scanf("%d", &quantpontoturistico);

    // ===== CIDADE 02 =====
    printf("\n********** CIDADE 02 ********\n");

    printf("SIGLA DO ESTADO: ");
    scanf("%2s", estado2);

    printf("CODIGO DA CARTA: ");
    scanf("%9s", codigocarta2);

    printf("NOME DA CIDADE: ");
    scanf("%49s", nomecidade2);

    printf("POPULACAO: ");
    scanf("%lu", &populacao2);

    printf("AREA TOTAL: ");
    scanf("%f", &area2);

    printf("PIB: ");
    scanf("%f", &pib2);

    printf("PONTOS TURISTICOS: ");
    scanf("%d", &quantpontoturistico2);

    // ===== CÁLCULOS =====
    densidade1 = (float)populacao / area;
    densidade2 = (float)populacao2 / area2;

    percapta1 = pib / (float)populacao;
    percapta2 = pib2 / (float)populacao2;

    superpoder1 = (float)populacao + area + pib + quantpontoturistico +
                  percapta1 + (1.0f / densidade1);

    superpoder2 = (float)populacao2 + area2 + pib2 + quantpontoturistico2 +
                  percapta2 + (1.0f / densidade2);

    // ===== EXIBIÇÃO =====
    printf("\n******* CARTAS CADASTRADAS *******\n");

    printf("\nCARD 01\n");
    printf("ESTADO: %s\n", estado);
    printf("CARTAO: %s\n", codigocarta);
    printf("CIDADE: %s\n", nomecidade);
    printf("POPULACAO: %lu\n", populacao);
    printf("AREA: %.2f\n", area);
    printf("PIB: %.2f\n", pib);
    printf("PONTOS TURISTICOS: %d\n", quantpontoturistico);
    printf("DENSIDADE: %.2f\n", densidade1);
    printf("PIB PER CAPITA: %.6f\n", percapta1);
    printf("SUPER PODER: %.2f\n", superpoder1);

    printf("\nCARD 02\n");
    printf("ESTADO: %s\n", estado2);
    printf("CARTAO: %s\n", codigocarta2);
    printf("CIDADE: %s\n", nomecidade2);
    printf("POPULACAO: %lu\n", populacao2);
    printf("AREA: %.2f\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("PONTOS TURISTICOS: %d\n", quantpontoturistico2);
    printf("DENSIDADE: %.2f\n", densidade2);
    printf("PIB PER CAPITA: %.6f\n", percapta2);
    printf("SUPER PODER: %.2f\n", superpoder2);

    // ===== COMPARAÇÃO =====
    printf("\n***** COMPARACAO DE CARTAS *****\n");

    printf("Populacao: venceu (%d)\n", populacao > populacao2);
    printf("Area: venceu (%d)\n", area > area2);
    printf("PIB: venceu (%d)\n", pib > pib2);
    printf("Pontos Turisticos: venceu (%d)\n", quantpontoturistico > quantpontoturistico2);
    printf("Densidade Populacional: venceu (%d)\n", densidade1 < densidade2);
    printf("PIB per Capita: venceu (%d)\n", percapta1 > percapta2);
    printf("Super Poder: venceu (%d)\n", superpoder1 > superpoder2);

    return 0;
}
