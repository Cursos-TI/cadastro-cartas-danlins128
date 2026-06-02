#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
    char estado1, estado2;
    char codigo1[5], codigo2[5];
    char cidade1[20], cidade2[20];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontos_turisticos1, pontos_turisticos2;

  // Área para entrada de dados
    printf("Bem vindo ao jogo Super Trunfo\n");
    printf("\nPara começar, digite os dados das suas *duas* cartas.\n");

    printf("Digite o estado (A - H)\n: ");
    scanf("%c %c", &estado1, &estado2);

    printf("Agora o código da carta (use a letra do estado mais dois números de 01-04)");
    scanf("%s %s", codigo1, codigo2);

    printf("Qual é o nome das cidades: ");
    scanf("%s %s", cidade1, cidade2);

    printf("Digte o número da população de cada uma: ");
    scanf("%d %d", &populacao1, &populacao2);

    printf("Digite a área em km²: ");
    scanf("%f %f", &area1, &area2);

    printf("Digite o PIB (produto interno bruto): ");
    scanf("%f %f", &pib1, &pib2);

    printf("Digite a quantidade de pontos turísticos: ");
    scanf("%d %d\n\n", &pontos_turisticos1, &pontos_turisticos2);

  // Área para exibição dos dados da cidade
    printf("Carta 01\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos1);
    printf("\n");
    printf("Carta 02\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2fkm²\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos2);

return 0;
} 
