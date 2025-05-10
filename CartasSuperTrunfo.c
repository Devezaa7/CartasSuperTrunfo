#include <stdio.h>

int main() {
    char estado1, estado2;
    char codigo1[4], codigo2[4];
    char nome1[50], nome2[50];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontos1, pontos2;
    char lixo;  // usado para limpar o buffer

    // Carta 1
    printf("Cadastro da Carta 1\n");

    printf("Digite o estado (A-H): ");
    scanf(" %c", &estado1);
    scanf("%c", &lixo);  // limpa Enter do buffer

    printf("Digite o codigo da carta (ex: A01): ");
    scanf("%s", codigo1);
    scanf("%c", &lixo);  // limpa Enter

    printf("Digite o nome da cidade (sem espacos): ");
    scanf("%s", nome1);
    scanf("%c", &lixo);  // limpa Enter

    printf("Digite a populacao: ");
    scanf("%d", &populacao1);
    scanf("%c", &lixo);  // limpa Enter

    printf("Digite a area em km2: ");
    scanf("%f", &area1);
    scanf("%c", &lixo);  // limpa Enter

    printf("Digite o PIB em bilhoes de reais (use ponto): ");
    scanf("%f", &pib1);
    scanf("%c", &lixo);  // limpa Enter

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontos1);
    scanf("%c", &lixo);  // limpa Enter

    // Carta 2
    printf("\nCadastro da Carta 2\n");

    printf("Digite o estado (A-H): ");
    scanf(" %c", &estado2);
    scanf("%c", &lixo);

    printf("Digite o codigo da carta (ex: B02): ");
    scanf("%s", codigo2);
    scanf("%c", &lixo);

    printf("Digite o nome da cidade (sem espacos): ");
    scanf("%s", nome2);
    scanf("%c", &lixo);

    printf("Digite a populacao: ");
    scanf("%d", &populacao2);
    scanf("%c", &lixo);

    printf("Digite a area em km2: ");
    scanf("%f", &area2);
    scanf("%c", &lixo);

    printf("Digite o PIB em bilhoes de reais (use ponto): ");
    scanf("%f", &pib2);
    scanf("%c", &lixo);

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontos2);
    scanf("%c", &lixo);

    // Exibicao
    printf("\n=========================\n");
    printf("Carta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nome1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km2\n", area1);
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n", pontos1);

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nome2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km2\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", pontos2);

    return 0;
}
