#include <stdio.h>
#include <string.h>

int main() {
    char codigodacarta1[50], codigodacarta2[50];
    char nomedacidade1[50], nomedacidade2[50];
    char estado1, estado2;
    int habitantes1, habitantes2;
    float areaemquilometros1, areaemquilometros2;
    float pib1, pib2;
    int pontosturisticos1, pontosturisticos2;
    float pibpercapta1, pibpercapta2;
    float densidadepopulacional1, densidadepopulacional2;
    float superpoder1, superpoder2;

    printf("Carta 1\n");
    printf("Digite o codigo da primeira carta: ");
    scanf("%s", codigodacarta1);

    printf("Digite a area em km²: ");
    scanf("%f", &areaemquilometros1);

    printf("Digite o nome da cidade: ");
    scanf("%s", nomedacidade1);

    printf("Digite a letra do estado: ");
    scanf(" %c", &estado1);

    printf("Digite os pontos turisticos: ");
    scanf("%d", &pontosturisticos1);

    printf("Digite o PIB: ");
    scanf("%f", &pib1);

    printf("Digite o numero de habitantes: ");
    scanf("%d", &habitantes1);

    printf("\nCarta 2\n");
    printf("Digite o codigo da segunda carta: ");
    scanf("%s", codigodacarta2);

    printf("Digite a area em km²: ");
    scanf("%f", &areaemquilometros2);

    printf("Digite o nome da cidade: ");
    scanf("%s", nomedacidade2);

    printf("Digite a letra do estado: ");
    scanf(" %c", &estado2);

    printf("Digite os pontos turisticos: ");
    scanf("%d", &pontosturisticos2);

    printf("Digite o PIB: ");
    scanf("%f", &pib2);

    printf("Digite o numero de habitantes: ");
    scanf("%d", &habitantes2);

    // cálculos
    pibpercapta1 = pib1 / habitantes1;
    densidadepopulacional1 = (float) habitantes1 / areaemquilometros1;

    pibpercapta2 = pib2 / habitantes2;
    densidadepopulacional2 = (float) habitantes2 / areaemquilometros2;

    superpoder1 = (pibpercapta1 + densidadepopulacional1 + pontosturisticos1 + areaemquilometros1) / 4;
    superpoder2 = (pibpercapta2 + densidadepopulacional2 + pontosturisticos2 + areaemquilometros2) / 4;

    printf("\n--- Comparações ---\n");

    if (habitantes1 > habitantes2)
        printf("Mais habitantes: %s (%d)\n", nomedacidade1, habitantes1);
    else
        printf("Mais habitantes: %s (%d)\n", nomedacidade2, habitantes2);

    if (densidadepopulacional1 > densidadepopulacional2)
        printf("Maior densidade populacional: %s (%.2f)\n", nomedacidade1, densidadepopulacional1);
    else
        printf("Maior densidade populacional: %s (%.2f)\n", nomedacidade2, densidadepopulacional2);

    if (pibpercapta1 > pibpercapta2)
        printf("Maior PIB per capita: %s (%.2f)\n", nomedacidade1, pibpercapta1);
    else
        printf("Maior PIB per capita: %s (%.2f)\n", nomedacidade2, pibpercapta2);

    if (pib1 > pib2)
        printf("Maior PIB total: %s (%.2f)\n", nomedacidade1, pib1);
    else
        printf("Maior PIB total: %s (%.2f)\n", nomedacidade2, pib2);

    if (areaemquilometros1 > areaemquilometros2)
        printf("Maior área territorial: %s (%.2f km²)\n", nomedacidade1, areaemquilometros1);
    else
        printf("Maior área territorial: %s (%.2f km²)\n", nomedacidade2, areaemquilometros2);

    if (pontosturisticos1 > pontosturisticos2)
        printf("Mais pontos turísticos: %s (%d)\n", nomedacidade1, pontosturisticos1);
    else
        printf("Mais pontos turísticos: %s (%d)\n", nomedacidade2, pontosturisticos2);

    if (superpoder1 > superpoder2)
        printf("Maior Super Poder: %s (%.2f)\n", nomedacidade1, superpoder1);
    else
        printf("Maior Super Poder: %s (%.2f)\n", nomedacidade2, superpoder2);

    // comparação de nomes (alfabética)
    if (strcmp(nomedacidade1, nomedacidade2) > 0)
        printf("Nome da cidade maior (ordem alfabética): %s\n", nomedacidade1);
    else
        printf("Nome da cidade maior (ordem alfabética): %s\n", nomedacidade2);

    return 0;
}
