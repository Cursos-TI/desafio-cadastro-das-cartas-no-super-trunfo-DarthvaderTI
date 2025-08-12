#include <stdio.h>

int main() {
    char codigodacarta1[50], codigodacarta2[50];
    char nomedacidade1[50], nomedacidade2[50];
    char estado1, estado2;
    int habitantes1, habitantes2;
    float areaemquilometros1, areaemquilometros2;
    float pib1, pib2;
    int pontosturisticos1, pontosturisticos2;

    

("printf desafio super trunfo !\n");



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

    

    return 0;
}

