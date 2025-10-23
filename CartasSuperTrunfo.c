#include <stdio.h>
#include <string.h>

int main() {
    // Estrutura das cartas (poderia ser struct, mas aqui simplificado para o desafio)
    char nome1[50] = "Brasil";
    int populacao1 = 213000000;
    float area1 = 8516000.0;
    float pib1 = 2.05; // em trilhões
    int pontos_turisticos1 = 10;

    char nome2[50] = "Argentina";
    int populacao2 = 45100000;
    float area2 = 2780000.0;
    float pib2 = 0.49; // em trilhões
    int pontos_turisticos2 = 7;

    // Calculando densidade demográfica (população / área)
    float densidade1 = populacao1 / area1;
    float densidade2 = populacao2 / area2;

    int opcao;

    // Menu interativo
    printf("===== SUPER TRUNFO - COMPARAÇÃO ENTRE CARTAS =====\n");
    printf("Carta 1: %s\n", nome1);
    printf("Carta 2: %s\n\n", nome2);
    printf("Escolha o atributo para comparar:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Demográfica\n");
    printf("Opção: ");
    scanf("%d", &opcao);

    printf("\n===== RESULTADO =====\n");

    // Lógica principal
    switch (opcao) {
        case 1:
            printf("Atributo: População\n");
            printf("%s: %d habitantes\n", nome1, populacao1);
            printf("%s: %d habitantes\n", nome2, populacao2);

            if (populacao1 > populacao2)
                printf("Vencedor: %s\n", nome1);
            else if (populacao2 > populacao1)
                printf("Vencedor: %s\n", nome2);
            else
                printf("Empate!\n");
            break;

        case 2:
            printf("Atributo: Área\n");
            printf("%s: %.2f km²\n", nome1, area1);
            printf("%s: %.2f km²\n", nome2, area2);

            if (area1 > area2)
                printf("Vencedor: %s\n", nome1);
            else if (area2 > area1)
                printf("Vencedor: %s\n", nome2);
            else
                printf("Empate!\n");
            break;

        case 3:
            printf("Atributo: PIB (em trilhões de dólares)\n");
            printf("%s: %.2f\n", nome1, pib1);
            printf("%s: %.2f\n", nome2, pib2);

            if (pib1 > pib2)
                printf("Vencedor: %s\n", nome1);
            else if (pib2 > pib1)
                printf("Vencedor: %s\n", nome2);
            else
                printf("Empate!\n");
            break;

        case 4:
            printf("Atributo: Pontos Turísticos\n");
            printf("%s: %d pontos\n", nome1, pontos_turisticos1);
            printf("%s: %d pontos\n", nome2, pontos_turisticos2);

            if (pontos_turisticos1 > pontos_turisticos2)
                printf("Vencedor: %s\n", nome1);
            else if (pontos_turisticos2 > pontos_turisticos1)
                printf("Vencedor: %s\n", nome2);
            else
                printf("Empate!\n");
            break;

        case 5:
            printf("Atributo: Densidade Demográfica (habitantes/km²)\n");
            printf("%s: %.2f\n", nome1, densidade1);
            printf("%s: %.2f\n", nome2, densidade2);

            // Regra invertida — menor densidade vence
            if (densidade1 < densidade2)
                printf("Vencedor: %s\n", nome1);
            else if (densidade2 < densidade1)
                printf("Vencedor: %s\n", nome2);
            else
                printf("Empate!\n");
            break;

        default:
            printf("Opção inválida! Escolha um número de 1 a 5.\n");
            break;
    }

    printf("===========================================\n");

    return 0;
}
