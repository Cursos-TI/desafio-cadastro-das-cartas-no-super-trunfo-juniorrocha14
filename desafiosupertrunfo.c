#include <stdio.h>

int main() {
    // Carta 1
    char estado1;
    char codigo1[16];
    char nomeCidade1[100];
    int populacao1;
    float area1;
    float pib1; // em BILHOES de reais
    int pontosTuristicos1;
    float densidade1;
    float pibPerCapita1;

    // Carta 2
    char estado2;
    char codigo2[16];
    char nomeCidade2[100];
    int populacao2;
    float area2;
    float pib2; // em BILHOES de reais
    int pontosTuristicos2;
    float densidade2;
    float pibPerCapita2;

    // Entrada da Carta 1
    printf("Digite o estado da Carta 1 (uma letra): ");
    scanf(" %c", &estado1);

    printf("Digite o codigo da Carta 1: ");
    scanf(" %s", codigo1);

    printf("Digite o nome da cidade da Carta 1: ");
    scanf(" %[^\n]", nomeCidade1); // lê até o \n (aceita espaços)

    printf("Digite a populacao da Carta 1 (sem pontos): ");
    scanf(" %d", &populacao1);

    printf("Digite a area da cidade da Carta 1 (km2) (use ponto): ");
    scanf(" %f", &area1);

    printf("Digite o PIB da cidade da Carta 1 (em BILHOES de reais): ");
    scanf(" %f", &pib1);

    printf("Digite o numero de pontos turisticos da Carta 1: ");
    scanf(" %d", &pontosTuristicos1);

    // Entrada da Carta 2
    printf("\nDigite o estado da Carta 2 (uma letra): ");
    scanf(" %c", &estado2);

    printf("Digite o codigo da Carta 2: ");
    scanf(" %s", codigo2);

    printf("Digite o nome da cidade da Carta 2: ");
    scanf(" %[^\n]", nomeCidade2);

    printf("Digite a populacao da Carta 2 (sem pontos): ");
    scanf(" %d", &populacao2);

    printf("Digite a area da cidade da Carta 2 (km2) (use ponto): ");
    scanf(" %f", &area2);

    printf("Digite o PIB da cidade da Carta 2 (em BILHOES de reais): ");
    scanf(" %f", &pib2);

    printf("Digite o numero de pontos turisticos da Carta 2: ");
    scanf(" %d", &pontosTuristicos2);

    // Cálculos
    if (area1 > 0.0f)
        densidade1 = (float)populacao1 / area1;
    else
        densidade1 = 0.0f;

    if (populacao1 > 0)
        pibPerCapita1 = (pib1 * 1e9f) / (float)populacao1; // converte bilhões -> reais
    else
        pibPerCapita1 = 0.0f;

    if (area2 > 0.0f)
        densidade2 = (float)populacao2 / area2;
    else
        densidade2 = 0.0f;

    if (populacao2 > 0)
        pibPerCapita2 = (pib2 * 1e9f) / (float)populacao2;
    else
        pibPerCapita2 = 0.0f;

    // Saída formatada
    printf("\n\n--- Carta 1 ---\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita1);

    printf("\n--- Carta 2 ---\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);

    return 0;
}
