#include <stdio.h>
#include <string.h>

int main() {
    // Variáveis da primeira carta
    char estado, codigo[50], cidade[50];
    unsigned long int populacao;
    float area, PIB;
    int pturistico;
    float Dpopulacional, PIBpcapta;

    // Variáveis da segunda carta
    char estado2, codigo2[50], cidade2[50];
    unsigned long int populacao2;
    float area2, PIB2;
    int pturistico2;
    float Dpopulacional2, PIBpcapta2;

    float superPoder1, superPoder2;

    //************Carta 1************
    printf("***** Informações primeira carta *****\n");
    printf("Digite a primeira letra do Estado: \n");
    scanf(" %c", &estado);

    printf("Digite o código da carta: \n");
    scanf("%s", codigo);

    getchar(); 
    printf("Digite o nome da cidade: \n");
    fgets(cidade, sizeof(cidade), stdin);
    cidade[strcspn(cidade, "\n")] = 0; 

    printf("Digite o número de habitantes da cidade: \n");
    scanf("%lu", &populacao);

    printf("Digite a área da cidade em quilômetros quadrados: \n");
    scanf("%f", &area);

    printf("Digite PIB da cidade: \n");
    scanf("%f", &PIB);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &pturistico);

    
    Dpopulacional = (area > 0) ? (float)populacao / area : 0.0f;
    PIBpcapta = (populacao > 0) ? PIB / (float)populacao : 0.0f;

    //************Carta 2************
    printf("***** Informações segunda carta *****\n");
    printf("Digite a primeira letra do Estado: \n");
    scanf(" %c", &estado2);

    printf("Digite o código da carta: \n");
    scanf("%s", codigo2);

    getchar();
    printf("Digite o nome da cidade: \n");
    fgets(cidade2, sizeof(cidade2), stdin);
    cidade2[strcspn(cidade2, "\n")] = 0;

    printf("Digite o número de habitantes da cidade: \n");
    scanf("%lu", &populacao2);

    printf("Digite a área da cidade em quilômetros quadrados: \n");
    scanf("%f", &area2);

    printf("Digite PIB da cidade: \n");
    scanf("%f", &PIB2);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &pturistico2);

    Dpopulacional2 = (area2 > 0) ? (float)populacao2 / area2 : 0.0f;
    PIBpcapta2 = (populacao2 > 0) ? PIB2 / (float)populacao2 : 0.0f;

    // Super Poder
    superPoder1 = (float)populacao + area + PIB + pturistico + PIBpcapta;
    superPoder2 = (float)populacao2 + area2 + PIB2 + pturistico2 + PIBpcapta2;

    //************Saída************
    printf("\n==== CARTA 1 ====\n");
    printf("Estado: %c\n", estado);
    printf("Código: %s\n", codigo);
    printf("Nome da cidade: %s\n", cidade);
    printf("População: %lu\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f bilhões de reais\n", PIB);
    printf("Pontos turísticos: %d\n", pturistico);
    printf("Densidade Populacional: %.2f hab/km²\n", Dpopulacional);
    printf("PIB per Capita: %.2f reais\n", PIBpcapta);

    printf("\n==== CARTA 2 ====\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da cidade: %s\n", cidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", PIB2);
    printf("Pontos turísticos: %d\n", pturistico2);
    printf("Densidade Populacional: %.2f hab/km²\n", Dpopulacional2);
    printf("PIB per Capita: %.2f reais\n", PIBpcapta2);

    //************Comparações************
    printf("\n==== Comparação ====\n");

    // População
    if (populacao > populacao2) {
        printf("População (1=Cart1,0=Cart2): 1\n");
    } else {
        printf("População (1=Cart1,0=Cart2): 0\n");
    }

    // Área
    if (area > area2) {
        printf("Área (1=Cart1,0=Cart2): 1\n");
    } else {
        printf("Área (1=Cart1,0=Cart2): 0\n");
    }

    // PIB
    if (PIB > PIB2) {
        printf("PIB (1=Cart1,0=Cart2): 1\n");
    } else {
        printf("PIB (1=Cart1,0=Cart2): 0\n");
    }

    // Pontos turísticos
    if (pturistico > pturistico2) {
        printf("Pontos turísticos (1=Cart1,0=Cart2): 1\n");
    } else {
        printf("Pontos turísticos (1=Cart1,0=Cart2): 0\n");
    }

    // Densidade populacional 
    if (Dpopulacional < Dpopulacional2) {
        printf("Densidade Populacional (1=Cart1,0=Cart2): 1\n");
    } else {
        printf("Densidade Populacional (1=Cart1,0=Cart2): 0\n");
    }

    // PIB per capita
    if (PIBpcapta > PIBpcapta2) {
        printf("PIB per Capita (1=Cart1,0=Cart2): 1\n");
    } else {
        printf("PIB per Capita (1=Cart1,0=Cart2): 0\n");
    }

    // Super poder
    if (superPoder1 > superPoder2) {
        printf("Super Poder (1=Cart1,0=Cart2): 1\n");
    } else {
        printf("Super Poder (1=Cart1,0=Cart2): 0\n");
    }

    return 0;
}
