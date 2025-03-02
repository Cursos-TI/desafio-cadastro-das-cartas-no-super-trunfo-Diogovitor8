#include <stdio.h>

int main() {
    
    printf("Olá, vamos comerçar!\n");
   
    char cidade[50];
    char codigo[50];
    int turismo;
    float populacao;
    int area;
    float pib;
    float divisao = populacao / area; 
    float percapita = pib / populacao;

    printf("Digite o nome da cidade:\n");
    scanf("%s" , &cidade);

    printf("Digite o codigo da cidade:\n");
    scanf("%s", &codigo);

    printf("Quantidade de locais turisticos:\n");
    scanf("%d" , &turismo);   

    printf("Qual a população da cidade?\n");
    scanf("%f" , &populacao);

    printf("Qual a área da cidade em KM²?\n");
    scanf("%d" , &area);

    printf("Qual o PIB ?\n");
    scanf("%f" , &pib);

    printf("Dados cadastrados, vamos lá:\n");
    printf(" Sua cidade: %s\n Código: %s\n" , cidade, codigo);
    printf(" Locais turisticos: %d\n" , turismo);
    printf(" População: %.3f\n Área da cidade: %d\n Pib: %f\n" , populacao, area, pib);
    printf(" Densidade populacional: %.2f\n" , populacao / area);
    printf(" PIB per capita: %.2f\n" , pib / populacao);

    return 0;
}
