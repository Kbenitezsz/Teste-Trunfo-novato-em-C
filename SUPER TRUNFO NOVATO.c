#include <stdio.h>

int main() {
    char nome1[50], nome2[50];
    char letra1, letra2;
    char codigo1[3], codigo2[3];
    char cidade1[50], cidade2[50];
    int populacao1, populacao2;
    float area1, area2;
    float PIB1, PIB2;
    int pontos_turisticos1, pontos_turisticos2;

    // ===== CARTA 1 =====
    printf("=== Carta 1 ===\n");
    printf("Nome do jogador: ");
    scanf("%49s", nome1);

    printf("Letra da carta (A-H): ");
    scanf(" %c", &letra1);

    printf("Codigo da carta (ex: A1, B5): ");
    scanf("%2s", codigo1);

    printf("Nome da cidade: ");
    scanf("%49s", cidade1);

    printf("Numero de habitantes: ");
    scanf("%d", &populacao1);

    printf("Area da cidade (km²): ");
    scanf("%f", &area1);

    printf("PIB da cidade (bilhoes): ");
    scanf("%f", &PIB1);

    printf("Numero de pontos turisticos: ");
    scanf("%d", &pontos_turisticos1);

    // ===== CARTA 2 =====
    printf("\n=== Carta 2 ===\n");
    printf("Nome do jogador: ");
    scanf("%49s", nome2);

    printf("Letra da carta (A-H): ");
    scanf(" %c", &letra2);

    printf("Codigo da carta (ex: A1, B5): ");
    scanf("%2s", codigo2);

    printf("Nome da cidade: ");
    scanf("%49s", cidade2);

    printf("Numero de habitantes: ");
    scanf("%d", &populacao2);

    printf("Area da cidade (km²): ");
    scanf("%f", &area2);

    printf("PIB da cidade (bilhoes): ");
    scanf("%f", &PIB2);

    printf("Numero de pontos turisticos: ");
    scanf("%d", &pontos_turisticos2);

    // ===== RESUMO FINAL =====
    printf("\n===== RESUMO DAS CARTAS =====\n");

    printf("\n--- Carta 1 ---\n");
    printf("Jogador: %s\n", nome1);
    printf("Letra: %c\n", letra1);
    printf("Codigo: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("Populacao: %d habitantes\n", populacao1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.2f bilhoes\n", PIB1);
    printf("Pontos turisticos: %d\n", pontos_turisticos1);

    printf("\n--- Carta 2 ---\n");
    printf("Jogador: %s\n", nome2);
    printf("Letra: %c\n", letra2);
    printf("Codigo: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("Populacao: %d habitantes\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f bilhoes\n", PIB2);
    printf("Pontos turisticos: %d\n", pontos_turisticos2);

    printf("\n=============================\n");

    return 0;
}