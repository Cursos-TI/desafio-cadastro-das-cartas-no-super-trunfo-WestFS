#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {        
    // <!--- VARIAVEIS DA CARTA 1 --->
    char estado_1;
    char codigo_carta_1[5];
    char nome_cidade_1[50];
    int populacao_1;
    float area_1;
    float pib_1;
    int pontos_turisticos_1;

    // <!--- VARIAVEIS DA CARTA 2 --->
    char estado_2;
    char codigo_carta_2[5];
    char nome_cidade_2[50];
    int populacao_2;
    float area_2;
    float pib_2;
    int pontos_turisticos_2;

     // <!--- CADASTRO DA CARTA 1 --->

    printf("<!--- CADASTRO DA CARTA 1 --->\n\n");
    printf("CARTA 1:\n");

    printf("Estado (A-H): ");
    scanf(" %c", &estado_1);

    printf("Codigo da Carta (Ex: A01): ");
    scanf("%s", codigo_carta_1);

    printf("Nome da Cidade: ");
    scanf("%s", nome_cidade_1);

    printf("Populaç�o: ");
    scanf("%d", &populacao_1);

    printf("Área (em km²):");
    scanf("%f", &area_1);

    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib_1);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontos_turisticos_1);

    printf("\n\n");

    // #######################################

    printf("<!--- CADASTRO DA CARTA 2 --->\n\n");
    printf("CARTA 2:\n");

    printf("Estado (A-H): ");
    scanf(" %c", &estado_2);

    printf("Codigo da Carta (Ex: A01): ");
    scanf("%s", codigo_carta_2);

    printf("Nome da Cidade: ");
    scanf("%s", nome_cidade_2);

    printf("Populaç�o: ");
    scanf("%d", &populacao_2);

    printf("Área (em km²):");
    scanf("%f", &area_2);

    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib_2);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontos_turisticos_2);


    // --- EXIBIÇÃO DAS CARTAS CADASTRADAS ---
    printf("\n--- Cartas Cadastradas ---\n\n");

    // Exibição da Carta 1
    printf("Carta 1:\n");
    printf("Estado: %c\n", estado_1);
    printf("Código: %s\n", codigo_carta_1);
    printf("Nome da Cidade: %s\n", nome_cidade_1);
    printf("População: %d\n", populacao_1);
    printf("Área: %.2f km²\n", area_1);
    printf("PIB: %.2f bilhões de reais\n", pib_1);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos_1);
    printf("\n");

    // Exibição da Carta 2
    printf("Carta 2:\n");
    printf("Estado: %c\n", estado_2);
    printf("Código: %s\n", codigo_carta_2);
    printf("Nome da Cidade: %s\n", nome_cidade_2);
    printf("População: %d\n", populacao_2);
    printf("Área: %.2f km²\n", area_2);
    printf("PIB: %.2f bilhões de reais\n", pib_2);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos_2);


    return 0;
}
