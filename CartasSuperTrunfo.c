#include <stdio.h>

int main() {
    char e1, e2; // para os estados
    char c1[5], c2[5]; // para os códigos das cartas
    char cidade1[50], cidade2[50]; // para os nomes das cidades
    int p1, p2; // população das cidades
    float a1, a2, pi1, pi2; // área e PIB das cidades
    int pt1, pt2; // pontos turísticos das cidades
    
    printf("Digite o estado da Carta 1 (A-H): ");
    scanf(" %c", &e1);  // " %c" para pegar um char com espaços antes
    printf("Digite o código da Carta 1 (Ex: A01): ");
    scanf("%s", c1); // lê o código da carta 1
    printf("Digite o nome da Cidade 1: ");
    scanf(" %49[^\n]", cidade1); // lê o nome da cidade, permitindo espaços
    printf("Digite a população da Cidade 1: ");
    scanf("%d", &p1); // lê a população da cidade 1
    printf("Digite a área da Cidade 1 (km²): ");
    scanf("%f", &a1); // lê a área da cidade 1
    printf("Digite o PIB da Cidade 1 (bilhões de reais): ");
    scanf("%f", &pi1); // lê o PIB da cidade 1
    printf("Digite o número de pontos turísticos da Cidade 1: ");
    scanf("%d", &pt1); // lê o número de pontos turísticos

    printf("Digite o estado da Carta 2 (A-H): ");
    scanf(" %c", &e2); // lê o estado da carta 2
    printf("Digite o código da Carta 2 (Ex: B02): ");
    scanf("%s", c2); // lê o código da carta 2
    printf("Digite o nome da Cidade 2: ");
    scanf(" %49[^\n]", cidade2); // lê o nome da cidade 2
    printf("Digite a população da Cidade 2: ");
    scanf("%d", &p2); // lê a população da cidade 2
    printf("Digite a área da Cidade 2 (km²): ");
    scanf("%f", &a2); // lê a área da cidade 2
    printf("Digite o PIB da Cidade 2 (bilhões de reais): ");
    scanf("%f", &pi2); // lê o PIB da cidade 2
    printf("Digite o número de pontos turísticos da Cidade 2: ");
    scanf("%d", &pt2); // lê o número de pontos turísticos

    // Exibe as cartas
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", e1);
    printf("Código: %s\n", c1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d\n", p1);
    printf("Área: %.2f km²\n", a1);
    printf("PIB: %.2f bilhões de reais\n", pi1);
    printf("Pontos Turísticos: %d\n", pt1);

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", e2);
    printf("Código: %s\n", c2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", p2);
    printf("Área: %.2f km²\n", a2);
    printf("PIB: %.2f bilhões de reais\n", pi2);
    printf("Pontos Turísticos: %d\n", pt2);

    return 0;
}
