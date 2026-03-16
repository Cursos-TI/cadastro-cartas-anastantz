#include <stdio.h>

// Desafio Super Trunfo - Países
// Nível Aventureiro - Cálculo de densidade populacional e PIB per capita

int main() {

    // Declarando variáveis da carta 1
    char codigo1[4], nome1[50];
    int populacao1, ptsTuristicos1;
    float pib1, area1;

    // Novas propriedades da carta 1
    float densidade1, pibPerCapita1;

    // Declarando variáveis da carta 2
    char codigo2[4], nome2[50];
    int populacao2, ptsTuristicos2;
    float pib2, area2;

    // Novas propriedades da carta 2
    float densidade2, pibPerCapita2;

    // Tela de boas vindas
    printf("=====* SUPER TRUNFO: PAISES - CADASTRO DE CARTAS DE CIDADES *=====\n");
    printf("\nOla, player! Bem-vindo (a) ao Sistema de Cadastro de Cartas.\n");
    printf("Aqui voce pode cadastrar e conferir as informacoes das cartas de cidades registradas. Vamos la!.\n");

    // Cadastro da Carta 1
    printf("\nInsira os dados da Carta 1:\n");

    printf("Codigo da cidade: ");
    scanf("%s", &codigo1);

    printf("Nome da cidade: ");
    scanf("%s", &nome1);

    printf("Populacao: ");
    scanf("%d", &populacao1);

    printf("Area (km2): ");
    scanf("%f", &area1);

    printf("PIB: ");
    scanf("%f", &pib1);

    printf("Numero de pontos turisticos: ");
    scanf("%d", &ptsTuristicos1);

    // Cadastro da Carta 2
    printf("\nInsira os dados da Carta 2:\n");

    printf("Codigo da cidade: ");
    scanf("%s", &codigo2);

    printf("Nome da cidade: ");
    scanf("%s", &nome2);

    printf("Populacao: ");
    scanf("%d", &populacao2);

    printf("Area (km2): ");
    scanf("%f", &area2);

    printf("PIB: ");
    scanf("%f", &pib2);

    printf("Numero de pontos turisticos: ");
    scanf("%d", &ptsTuristicos2);

    // Cálculo das propriedades e conversão de tipos com cast explícito 

    densidade1 = (float) populacao1 / area1;
    pibPerCapita1 = pib1 / (float) populacao1;

    densidade2 = (float) populacao2 / area2;
    pibPerCapita2 = pib2 / (float) populacao2;

    // Exibição dos Dados das Cartas
    printf("\n=====* CARTAS CADASTRADAS *=====\n");

    printf("\nConfira os dados da Carta 1:\n");
    printf("Codigo: %s\n", codigo1);
    printf("Nome: %s\n", nome1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km2\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos Turisticos: %d\n", ptsTuristicos1);
    printf("Densidade Populacional: %.2f\n", densidade1);
    printf("PIB per capita: %.2f\n", pibPerCapita1);

    printf("\nConfira os dados da Carta 2:\n");
    printf("Codigo: %s\n", codigo2);
    printf("Nome: %s\n", nome2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km2\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos Turisticos: %d\n", ptsTuristicos2);
    printf("Densidade Populacional: %.2f\n", densidade2);
    printf("PIB per capita: %.2f\n", pibPerCapita2);

    // Encerramento
    printf("\nObrigado por usar o Sistema de Cadastro de Cartas!\n");
    printf("Suas cartas foram registradas e o programa sera encerrado.\n");
    printf("Ate a proxima!\n");

    return 0;
}