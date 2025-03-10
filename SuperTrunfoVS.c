#include <stdio.h>
#include <string.h>

int main() {
    char estado1[50], codigoCarta1[4], nomeCidade1[50];
    int populacao1, pontosTuristicos1;
    float area1, pib1;

    char estado2[50], codigoCarta2[4], nomeCidade2[50];
    int populacao2, pontosTuristicos2;
    float area2, pib2;

    // Leitura dos dados da primeira carta
    printf("Digite os dados da primeira carta:\n");

    printf("Estado: ");
    scanf(" %[^\n]s", estado1);

    printf("Codigo da Carta (ex: A01): ");
    scanf("%s", codigoCarta1);

    printf("Nome da Cidade: ");
    scanf(" %[^\n]s", nomeCidade1);

    printf("Populacao: ");
    scanf("%d", &populacao1);

    printf("Area (km2): ");
    scanf("%f", &area1);

    printf("PIB: ");
    scanf("%f", &pib1);

    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos1);

    // Leitura dos dados da segunda carta
    printf("\nDigite os dados da segunda carta:\n");

    printf("Estado: ");
    scanf(" %[^\n]s", estado2);

    printf("Codigo da Carta (ex: A01): ");
    scanf("%s", codigoCarta2);

    printf("Nome da Cidade: ");
    scanf(" %[^\n]s", nomeCidade2);

    printf("Populacao: ");
    scanf("%d", &populacao2);

    printf("Area (km2): ");
    scanf("%f", &area2);

    printf("PIB: ");
    scanf("%f", &pib2);

    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos2);

    // Exibição dos dados da primeira carta
    printf("\nDados da primeira carta:\n");
    printf("Estado: %s\n", estado1);
    printf("Codigo da Carta: %s\n", codigoCarta1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area (km2): %.2f\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos1);

    // Exibição dos dados da segunda carta
    printf("\nDados da segunda carta:\n");
    printf("Estado: %s\n", estado2);
    printf("Codigo da Carta: %s\n", codigoCarta2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area (km2): %.2f\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos2);

    // Comparação das cartas (exemplo: comparação por população)
    printf("\nResultado da batalha:\n");
    if (populacao1 > populacao2) {
        printf("A primeira carta venceu.\n");
    } else if (populacao2 > populacao1) {
        printf("A segunda carta venceu.\n");
    } else {
        printf("Empate (populacoes iguais).\n");
    }

    return 0;

}