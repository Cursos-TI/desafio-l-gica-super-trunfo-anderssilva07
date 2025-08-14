#include <stdio.h>

int main(){
    //variaveís da primeira carta
    char estado,codigo[50],cidade[50];
    unsigned long int populacao;
    float area, PIB;
    int pturistico;
    float Dpopulacional;
    float PIBpcapta;

    //variaveís da segunda carta
    char estado2,codigo2[50],cidade2[50];
    unsigned long int populacao2;
    float area2, PIB2;
    int pturistico2;
    float Dpopulacional2;
    float PIBpcapta2; 

    //super poder carta 1
    float superPoder1 = populacao + area + PIB + pturistico + PIBpcapta;

    //super poder carta 2
    float superPoder2 = populacao2 + area2 + PIB2 + pturistico2 + PIBpcapta2;




    //informacões da primeira carta 
    printf("*****Informações primeira carta*****\n");
    printf("Digite a primeira letra do Estado: \n");
    scanf("%c", &estado);
    
    //o código deve conter a primeira letra do Estado, seguida de um número de 01 a 04 
    printf("Digite o código da carta: \n");
    scanf("%s", codigo);

    printf("Digite o nome da cidade: \n");
    scanf("%s", cidade);

    printf("Digite o número de habitante da cidade: \n");
    scanf("%d", &populacao);

    printf("Digite a área da cidade em quilômetros quadrados: \n");
    scanf("%f", &area);

    printf("Digite PIB da cidade: \n");
    scanf("%f", &PIB);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &pturistico);

    Dpopulacional = populacao / area;

    PIBpcapta = PIB / populacao;




   //informções da segunda carta

    printf("*****informações segunda carta*****\n");
    printf("Digite a primeira letra do Estado: \n");
    scanf(" %c", &estado2);
    
    //o código deve conter a primeira letra do Estado, seguida de um número de 01 a 04 
    printf("Digite o código da carta: \n");
    scanf("%s", codigo2);

    printf("Digite o nome da cidade: \n");
    scanf("%s", cidade2);

    printf("Digite o número de habitante da cidade: \n");
    scanf("%d", &populacao2);

    printf("Digite a área da cidade em quilômetros quadrados: \n");
    scanf("%f", &area2);

    printf("Digite PIB da cidade: \n");
    scanf("%f", &PIB2);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &pturistico2);

    Dpopulacional2 = populacao2 / area2;

    PIBpcapta2 = PIB2 / populacao2;



   //saida de dados da primeira carta
    printf("Carta 1: \n");
    printf("Estado: %c\n", estado);
    printf("Código: %s\n", codigo);
    printf("Nome da cidade: %s\n", cidade);
    printf("População: %d\n", populacao);
    printf("Área: %f km²\n", area);
    printf("PIB: %f Bilhões de reais\n", PIB);
    printf("Número de Pontos turísticos: %d\n", pturistico);
    printf("Densidade Populacional: %f hab/km²\n", Dpopulacional);
    printf("PIB per Capta: %f Reais\n", PIBpcapta);
   
    //saida de dados da segunda carta
    printf("Carta 2: \n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %f km²\n", area2);
    printf("PIB: %f Bilhões de reais\n", PIB2);
    printf("Número de Pontos turísticos: %d\n", pturistico2);
    printf("Densidade Populacional: %f hab/km²\n", Dpopulacional2);
    printf("PIB per Capta: %f Reais\n", PIBpcapta2);

  
    //comparação de cartas
    printf("Comparação de Cartas:\n");

    //população
    if(populacao > populacao2){
       printf("População: Carta 1 venceu\n");
    }
    else {
       printf("População: Carta 2 Venceu\n");
    }


    //area
    if(area > area2) {
       printf("Area: Carta 1 venceu\n");
    }   
    else {
       printf("Area: Carta 2 venceu\n");
    } 


    //PIB
    if(PIB > PIB2) {
       printf("PIB: Carta 1 venceu\n");
    }

    else {
       printf("PIB: Carta 2 venceu\n");
    }

    
    //Pontos turisticos
    if(pturistico > pturistico2) {
       printf("Pontos turisticos: Carta 1 venceu\n");
    }
   
    else {
        printf("Pontos turisticos:Carta 2 venceu\n");
    }

    //Densidade populacional
    if(Dpopulacional < Dpopulacional2) {
        printf("Densidade Populacional: Carta 1 venceu\n");
    }

    else {
        printf("Densidade Populacional: carta 2 venceu\n");
    }

    
    //PIB per capita
    if(PIBpcapta > PIBpcapta2) {
        printf("PIB per Capita: Carta 1 venceu\n");
    }
    else {
        printf("PIB per Capita: Carta 2 venceu\n");
    }

    //Super poder
    if(superPoder1 > superPoder2) {
        printf("Super poder: Carta 1 venceu\n");
    }

    else {
        printf("Super Poder: Carta 2 venceu\n");
    }


 


    return 0;
}