#include <stdio.h>

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
    int resultado;

    


    
    printf("Carta 1\n");
    printf("Digite o codigo da primeira carta: ");
    scanf("%s", codigodacarta1);

    printf("Digite a area em km²: ");
    scanf("%.2f", &areaemquilometros1);

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
    scanf("%.2f", &areaemquilometros2);

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

   



   pibpercapta1 = pib1 / habitantes1;
  densidadepopulacional1 = habitantes1 / areaemquilometros1;

    pibpercapta2 = pib2 / habitantes2;
    densidadepopulacional2 = habitantes2 / areaemquilometros2;

     
     
  
    

superpoder1 = (pibpercapta1 + densidadepopulacional1 + pontosturisticos1 + areaemquilometros1) / 4;

superpoder2 = (pibpercapta2 + densidadepopulacional2 + pontosturisticos2 + areaemquilometros2) / 4;


resultado = habitantes1 > habitantes2;

printf("habitantes1 (%d) > habitantes2 (%d):%d \n", habitantes1, habitantes2, resultado);

resultado = densidadepopulacional1 > densidadepopulacional2;
printf("densidade1(%.2f) > densidade2 (%.2f):%d \n", densidadepopulacional1, densidadepopulacional2, resultado);

resultado = pibpercapta1 > pibpercapta2;
printf("pib per capta1 (%.2f) > pib per capta2 (%.2f):%d \n", pibpercapta1, pibpercapta2, resultado);
    
resultado = pib1 > pib2;
printf("pib1 (%.2f) > pib2 (%.2f):%d \n", pib1, pib2, resultado);

resultado = areaemquilometros1 > areaemquilometros2;
printf("area1 (%.2f) > area2(%.2f):%d \n", areaemquilometros1, areaemquilometros2);


resultado = superpoder1 > superpoder2;
printf("super poder 1 (%.2f) > super poder 2 (%.2f): %d\n", superpoder1, superpoder2, resultado);

    
     

     


    
     
     

     



      
    






      

    
   

    return 0;

    
}

