#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    
    printf("Olá, vamos comerçar!\n");
   
    char cidade[50];
    int codigo;
    int turismo;
    float populacao;
    int area;
    float pib;

    printf("Digite o nome da cidade:\n");
    scanf("%s" , &cidade);

    printf("Digite o codigo da cidade:\n");
    scanf("%d", &codigo);

    printf("Quantidade de locais turisticos:\n");
    scanf("%d" , &turismo);   

    printf("Qual a população da cidade?\n");
    scanf("%f" , &populacao);

    printf("Qual a área da cidade em KM²?\n");
    scanf("%d" , &area);

    printf("Qual o PIB ?\n");
    scanf("%f" , &pib);

    printf("Dados cadastrados, vamos lá:\n");
    printf(" Sua cidade: %s\n" , cidade);
    printf(" Código: %d\n Locais turisticos: %d\n" , codigo, turismo);
    printf(" População: %f\n Área da cidade: %d\n Pib: %f\n" , populacao, area, pib);

    return 0;
}
