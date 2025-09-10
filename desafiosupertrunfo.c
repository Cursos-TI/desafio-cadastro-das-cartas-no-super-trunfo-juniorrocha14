#include <stdio.h>

int main() {
    // Carta 1
    char estado1;
    char codigo1[5];
    char nomeCidade1[30];
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;

    // Carta 2
    char estado2;
    char codigo2[5];
    char nomeCidade2[30];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;

    // Entrada da Carta 1
    printf("Digite o estado da Carta 1: ");
    scanf(" %c", &estado1);

    printf("Digite o codigo da Carta 1: ");
    scanf(" %s", codigo1);

    printf("Digite o nome da cidade da Carta 1: ");
    scanf(" %[^\n]", nomeCidade1);


    printf("Digite a populacao da Carta 1: ");
    scanf(" %d\n", &populacao1);


    printf("Digite a area da cidade da Carta 1 (km2): ");
    scanf(" %f\n", &area1);


    printf("Digite o PIB da cidade da Carta 1: ");
    scanf(" %f\n", &pib1);


    printf("Digite o numero de pontos turisticos da Carta 1: ");
    scanf(" %d\n", &pontosTuristicos1);


    // Entrada da Carta 2
    printf("Digite o estado da Carta 2: ");
    scanf(" %c\n", &estado2);

    printf("Digite o codigo da Carta 2: ");
    scanf(" %s\n", codigo2);

    printf("Digite o nome da cidade da Carta 2: ");
    scanf(" %[^\n]\n", nomeCidade2);

    printf("Digite a populacao da Carta 2: ");
    scanf(" %d\n", &populacao2);

    printf("Digite a area da cidade da Carta 2 (km2): ");
    scanf(" %f\n", &area2);

    printf("Digite o PIB da cidade da Carta 2: ");
    scanf(" %f\n", &pib2);

    printf("Digite o numero de pontos turisticos da Carta 2: ");
    scanf(" %d\n", &pontosTuristicos2);

    // Saída formatada
    printf("\n--- Carta 1 ---\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos1);

    printf("\n--- Carta 2 ---\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos2);

    return 0;
}
