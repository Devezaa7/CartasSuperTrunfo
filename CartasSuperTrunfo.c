#include <stdio.h>

typedef struct {
    char estado[50];
    int codigo;
    char nome[50];
    unsigned long int populacao;
    float area;
    double pib;
    int pontos_turisticos;
    float densidade;
    double pib_per_capita;
    float super_poder;
} Carta;

// Função para calcular densidade populacional
float calcular_densidade(unsigned long int populacao, float area) {
    return populacao / area;
}

// Função para calcular PIB per capita
double calcular_pib_per_capita(double pib, unsigned long int populacao) {
    return pib / populacao;
}

// Função para calcular Super Poder
float calcular_super_poder(Carta c) {
    float inverso_densidade = 1.0 / c.densidade;
    return (float)c.populacao + c.area + (float)c.pib + (float)c.pontos_turisticos +
           (float)c.pib_per_capita + inverso_densidade;
}

// Função para ler uma carta
void ler_carta(Carta *carta) {
    printf("Estado: ");
    scanf(" %[^\n]", carta->estado);
    
    printf("Código: ");
    scanf("%d", &carta->codigo);

    printf("Nome: ");
    scanf(" %[^\n]", carta->nome);

    printf("População: ");
    scanf("%lu", &carta->populacao);

    printf("Área (km²): ");
    scanf("%f", &carta->area);

    printf("PIB (em milhões): ");
    scanf("%lf", &carta->pib);

    printf("Nº de Pontos Turísticos: ");
    scanf("%d", &carta->pontos_turisticos);

    // Cálculos derivados
    carta->densidade = calcular_densidade(carta->populacao, carta->area);
    carta->pib_per_capita = calcular_pib_per_capita(carta->pib, carta->populacao);
    carta->super_poder = calcular_super_poder(*carta);
}

// Função de comparação entre dois atributos
void comparar_e_imprimir(char *atributo, float valor1, float valor2, int menor_vence) {
    int resultado = menor_vence ? (valor1 < valor2) : (valor1 > valor2);
    printf("%s: Carta 1 venceu (%d)\n", atributo, resultado);
}

int main() {
    Carta carta1, carta2;

    printf("Digite os dados da Carta 1:\n");
    ler_carta(&carta1);

    printf("\nDigite os dados da Carta 2:\n");
    ler_carta(&carta2);

    printf("\nComparação de Cartas:\n\n");

    comparar_e_imprimir("População", (float)carta1.populacao, (float)carta2.populacao, 0);
    comparar_e_imprimir("Área", carta1.area, carta2.area, 0);
    comparar_e_imprimir("PIB", (float)carta1.pib, (float)carta2.pib, 0);
    comparar_e_imprimir("Pontos Turísticos", (float)carta1.pontos_turisticos, (float)carta2.pontos_turisticos, 0);
    comparar_e_imprimir("Densidade Populacional", carta1.densidade, carta2.densidade, 1);
    comparar_e_imprimir("PIB per Capita", (float)carta1.pib_per_capita, (float)carta2.pib_per_capita, 0);
    comparar_e_imprimir("Super Poder", carta1.super_poder, carta2.super_poder, 0);

    return 0;
}
