#include <stdio.h>

int main() {
    
    printf("Olá, vamos comerçar!\n\n");
   
    // Variáveis Carta 1
    
    char estadoA[50];
    char cidadeA[50];
    char codigoA[50];
    int turismoA;
    float populacaoA;
    int areaA;
    float pibA;
    float superpoderA;
    float densidadeA;
    float pibpercapitaA;
    
    // Variáveis Carta 2
    
    char estadoB[50];
    char cidadeB[50];
    char codigoB[50];
    int turismoB;
    float populacaoB;
    int areaB;
    float pibB;
    float superpoderB;
    float densidadeB;
    float pibpercapitaB;

    //Dados Carta 1

    printf("***DIGITE OS DADOS DA PRIMEIRA CARTA***\n\n");

    printf("Digite o estado:\n");
    scanf("%s" , &estadoA);

    printf("Nome da cidade 1:\n");
    scanf("%s" , &cidadeA);

    printf("Digite o codigo da cidade:\n");
    scanf("%s", &codigoA);

    printf("Quantidade de locais turisticos:\n");
    scanf("%d" , &turismoA);   

    printf("Qual a população da cidade?\n");
    scanf("%f" , &populacaoA);

    printf("Qual a área da cidade em KM²?\n");
    scanf("%d" , &areaA);

    printf("Qual o PIB ?\n");
    scanf("%f" , &pibA);

     //Dados Carta 2

    printf("\n***AGORA, OS DADOS DA SEGUNDA CARTA***\n\n");
    
    printf("Digite o estado?\n");
    scanf("%s" , &estadoB);
    
    printf("Nome da cidade 2:\n");
    scanf("%s" , &cidadeB);

    printf("Digite o codigo da cidade:\n");
    scanf("%s", &codigoB);

    printf("Quantidade de locais turisticos:\n");
    scanf("%d" , &turismoB);   

    printf("Qual a população da cidade?\n");
    scanf("%f" , &populacaoB);

    printf("Qual a área da cidade em KM²?\n");
    scanf("%d" , &areaB);

    printf("Qual o PIB ?\n");
    scanf("%f" , &pibB);

    //Calculo da densidade populacional e PIB per capita
    
    densidadeB = (float)populacaoA / areaA;
    densidadeB = (float)populacaoB / areaB;
    pibpercapitaA = (double) pibA / populacaoA;
    pibpercapitaB = (double) pibB / populacaoB;

    //Super poderes
    superpoderA = populacaoA + areaA + turismoA + pibA + pibpercapitaA + (1.0 / densidadeA);
    
    superpoderB = populacaoB + areaB + turismoB + pibB + pibpercapitaB + (1.0 / densidadeB);

    // DADOS CARTA 1
    
    printf("\n***DADOS DE %s , vamos lá: ***\n\n", cidadeA);
    printf(" Estado: %s\n Cidade: %s\n Código: %s\n" , estadoA, cidadeA, codigoA);
    printf(" Locais turisticos: %d\n" , turismoA);
    printf(" População: %.3f\n Área da cidade: %d\n Pib: %f\n" , populacaoA, areaA, pibA);
    printf(" Densidade populacional: %.2f\n" , densidadeA);
    printf(" PIB per capita: %.2f\n" , pibpercapitaA);
    printf(" Super Poder: %.2f\n\n", superpoderB); 
     
    // DADOS CARTA 2
    
    printf("***DADOS DE %s , vamos lá: ***\n\n", cidadeB);
    printf(" Estado: %s\n Cidade: %s\n Código: %s\n" , estadoB, cidadeB, codigoB);
    printf(" Locais turisticos: %d\n" , turismoB);
    printf(" População: %.3f\n Área da cidade: %d\n Pib: %f\n" 
    , populacaoB, areaB, pibB);
    printf(" Densidade populacional: %.2f\n" , densidadeB);
    printf(" PIB per capita: %.2f\n" , pibpercapitaB);
    printf(" Super Poder: %.2f\n\n", superpoderB);
    
    // COMPARAÇÃO DAS CARTAS
    
    printf("***VEREMOS A COMPARAÇÃO DAS CARTAS, RESULTADO 1 PARA CARTA 1 E 0 PARA CARTA 2***\n\n");
    
    printf("População: carta %d vence\n", populacaoA > populacaoB);
    printf("Área: carta %d vence\n", areaA > areaB);
    printf("Pib: carta %d vence\n", pibA > pibB);
    printf("Pontos turisticos: carta %d vence\n", turismoA > turismoB);
    printf("Densidade populacional: carta %d vence\n", (populacaoA / areaA) > (populacaoB / areaB));
    printf("Pib per capita: carta %d vence\n", (pibA / populacaoA) > (pibB / populacaoB));
    printf("Super Poder: carta %d", superpoderA > superpoderB);
    
    return 0;
}
