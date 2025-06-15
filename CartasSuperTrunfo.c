#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main() {        
    // <!--- VARIAVEIS DA CARTA 1 --->
    char estado_1;
    char codigo_carta_1[5];
    char nome_cidade_1[50];
    unsigned long int populacao_1;
    float area_1;
    float pib_1;
    int pontos_turisticos_1;
    float densidade_populacional_1;
    float pib_percapita_1;
    float super_poder_1;

    // <!--- VARIAVEIS DA CARTA 2 --->
    char estado_2;
    char codigo_carta_2[5];
    char nome_cidade_2[50];
    unsigned long int populacao_2;
    float area_2;
    float pib_2;
    int pontos_turisticos_2;
    float densidade_populacional_2;
    float pib_percapita_2;
    float super_poder_2;

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
    scanf("%lu", &populacao_1); // %lu unsigned long int 

    printf("Área (em km²):");
    scanf("%f", &area_1);

    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib_1);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontos_turisticos_1);

    // Calcular a Densidade Populacional e o PIB per Capita ( CARTA 1)

    densidade_populacional_1 = (float) populacao_1 / area_1;
    pib_percapita_1 = pib_1 / (float) populacao_1;

    // Cálculo do Super Poder para Carta 1
    super_poder_1 = (float)populacao_1 + area_1 + pib_1 + (float)pontos_turisticos_1 +
                    pib_percapita_1 + (1.0f / densidade_populacional_1);


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
    scanf("%lu", &populacao_2); //%lu unsigned long int

    printf("Área (em km²):");
    scanf("%f", &area_2);

    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib_2);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontos_turisticos_2);

    // Calcular a Densidade Populacional e o PIB per Capita ( CARTA 2)

    densidade_populacional_2 = (float) populacao_2 / area_2;
    pib_percapita_2 = pib_2 / (float) populacao_2;


    // Cálculo do Super Poder para Carta 2
        super_poder_2 = (float)populacao_2 + area_2 + pib_2 + (float)pontos_turisticos_2 +
                    pib_percapita_2 + (1.0f / densidade_populacional_2);

    // --- EXIBIÇÃO DAS CARTAS CADASTRADAS ---
    printf("\n--- Cartas Cadastradas ---\n\n");

    // Exibição da Carta 1
    printf("Carta 1:\n");
    printf("Estado: %c\n", estado_1);
    printf("Código: %s\n", codigo_carta_1);
    printf("Nome da Cidade: %s\n", nome_cidade_1);
    printf("População: %lu\n", populacao_1);
    printf("Área: %.2f km²\n", area_1);
    printf("PIB: %.2f bilhões de reais\n", pib_1);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos_1);
    printf("Densidade Populacional: %0.2f hab/km²\n", densidade_populacional_1);
    printf("PIB per Capita: %0.2f reais\n", pib_percapita_1);
    printf("Super Poder: %.2f\n", super_poder_1);
    printf("\n");

    // Exibição da Carta 2
    printf("Carta 2:\n");
    printf("Estado: %c\n", estado_2);
    printf("Código: %s\n", codigo_carta_2);
    printf("Nome da Cidade: %s\n", nome_cidade_2);
    printf("População: %lu\n", populacao_2);
    printf("Área: %.2f km²\n", area_2);
    printf("PIB: %.2f bilhões de reais\n", pib_2);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos_2);
    printf("Densidade Populacional: %0.2f hab/km²\n", densidade_populacional_2);
    printf("PIB per Capita: %0.2f reais\n", pib_percapita_2);
    printf("Super Poder: %.2f\n", super_poder_2);
    printf("\n");

    // --- COMPARAÇÃO DAS CARTAS ---
    printf("--- Comparação de Cartas ---\n");

    printf("Resultados da comparação (1 = Carta 1 venceu; 0 = Carta 2 venceu/Empate):\n");
    printf("------------------------------------------------------------------\n"); 
    
    printf("População: (%d)\n", (int)(populacao_1 > populacao_2));
    printf("Área: (%d)\n", (int)(area_1 > area_2));
    printf("PIB: (%d)\n", (int)(pib_1 > pib_2));
    printf("Pontos Turísticos: (%d)\n", (int)(pontos_turisticos_1 > pontos_turisticos_2));
    printf("Densidade Populacional: (%d)\n", (int)(densidade_populacional_1 < densidade_populacional_2));
    printf("PIB per Capita: (%d)\n", (int)(pib_percapita_1 > pib_percapita_2));
    printf("Super Poder: (%d)\n", (int)(super_poder_1 > super_poder_2));
    

    return 0;
}
