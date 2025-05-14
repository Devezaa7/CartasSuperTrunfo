#include <stdio.h>

int main() {
    char estado1[3], codigo1[5], cidade1[50];
    int populacao1, pontos1;

    char estado2[3], codigo2[5], cidade2[50];
    int populacao2, pontos2;

    // Dados da Carta 1
    printf("CARTA 1\n");
    printf("Digite o estado (ex: A): ");
    scanf("%s", estado1);  // Lê o estado
    printf("Digite o codigo da carta (ex: A01): ");
    scanf("%s", codigo1);  // Lê o código da carta
    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", cidade1);  // Lê o nome da cidade com espaços
    printf("Digite a populacao: ");
    scanf("%d", &populacao1);
    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontos1);

    // Dados da Carta 2
    printf("\nCARTA 2\n");
    printf("Digite o estado (ex: B): ");
    scanf("%s", estado2);  // Lê o estado
    printf("Digite o codigo da carta (ex: B02): ");
    scanf("%s", codigo2);  // Lê o código da carta
    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", cidade2);  // Lê o nome da cidade com espaços
    printf("Digite a populacao: ");
    scanf("%d", &populacao2);
    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontos2);

    // Exibindo os resultados
    printf("\nCARTA 1:\n");
    printf("Estado: %s\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Pontos turisticos: %d\n", pontos1);

    printf("\nCARTA 2:\n");
    printf("Estado: %s\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Pontos turisticos: %d\n", pontos2);

    return 0;
}
