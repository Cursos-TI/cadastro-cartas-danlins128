#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
    char estado1, estado2;
    char codigo1[5], codigo2[5];
    char cidade1[20], cidade2[20];
    int populacao1, populacao2, pontos_turisticos1, pontos_turisticos2;
    double area1, area2, pib1, pib2, densidade_populacional1, densidade_populacional2, percap1, percap2;    

  // Área para entrada de dados
  // Adição da primeira carta
    printf("Bem vindo ao jogo Super Trunfo\n");
    printf("\nPara começar, digite os dados da sua carta.\n");

    printf("Digite o estado (A - H): ");
    scanf("%c", &estado1);

    printf("Agora o código da carta (use a letra do estado mais dois números de 01-04): ");
    scanf("%s", codigo1);

    printf("Qual é o nome da cidade: ");
    scanf("%s", cidade1);

    printf("Digte o número da população: ");
    scanf("%d", &populacao1);

    printf("Digite a área em km²: ");
    scanf("%lf", &area1);

    printf("Digite o PIB (produto interno bruto): ");
    scanf("%lf", &pib1);

    printf("Digite a quantidade de pontos turísticos: ");
    scanf("%d", &pontos_turisticos1);
    printf("\n");

  // Adição da segunda carta 

    printf("Digite o estado (A - H): ");
    scanf(" %c", &estado2);

    printf("Agora o código da carta (use a letra do estado mais dois números de 01-04): ");
    scanf("%s", codigo2);

    printf("Qual é o nome da cidade: ");
    scanf("%s", cidade2);

    printf("Digte o número da população: ");
    scanf("%d", &populacao2);

    printf("Digite a área em km²: ");
    scanf("%lf", &area2);

    printf("Digite o PIB (produto interno bruto): ");
    scanf("%lf", &pib2);

    printf("Digite a quantidade de pontos turísticos: ");
    scanf("%d", &pontos_turisticos2);
  //Cálculos lógicos

  densidade_populacional1 = (double) populacao1 / area1;
  densidade_populacional2 = (double) populacao2 / area2;

  percap1 = (double) pib1 * 1000000000.0 / populacao1;
  percap2 = (double) pib2 * 1000000000.0 / populacao2;

  // Área para exibição dos dados da cidade
    printf("\nCarta 01\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos1);
    printf("Densidade populacional: %.2f hab/km²\n", densidade_populacional1);
    printf("Pib per Capita: %.2f reais\n\n", percap1);
    // Carta 02
    printf("Carta 02\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos2);    
    printf("Densidade populacional: %.2f hab/km²\n", densidade_populacional2);
    printf("Pib per Capita: %.2f reais\n", percap2);

return 0;
} 
