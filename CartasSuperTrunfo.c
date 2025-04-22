#include <stdio.h>

// Estrutura para representar uma carta do Super Trunfo
struct Carta {
    char estado;
    char codigo[4];           // Ex: A01, B03 (3 caracteres + '\0')
    char nomeCidade[100];     // Nome da cidade (tamanho arbitrário)
    int populacao;
    float area;
    float pib;
    int pontosTuristicos;
};

int main() {
    // Declaração de duas cartas
    struct Carta carta1;
    struct Carta carta2;

    // Entrada de dados para a carta 1
    printf("Cadastro da Carta 1:\n");

    printf("Informe o estado (letra de A a H): ");
    scanf(" %c", &carta1.estado);

    printf("Informe o código da carta (ex: A01): ");
    scanf("%s", carta1.codigo);

    printf("Informe o nome da cidade: ");
    scanf(" %[^\n]", carta1.nomeCidade); // Lê até o final da linha (inclui espaços)

    printf("Informe a população: ");
    scanf("%d", &carta1.populacao);

    printf("Informe a área (em km²): ");
    scanf("%f", &carta1.area);

    printf("Informe o PIB (em bilhões de reais): ");
    scanf("%f", &carta1.pib);

    printf("Informe o número de pontos turísticos: ");
    scanf("%d", &carta1.pontosTuristicos);


    // Entrada de dados para a carta 2
    printf("\nCadastro da Carta 2:\n");

    printf("Informe o estado (letra de A a H): ");
    scanf(" %c", &carta2.estado);

    printf("Informe o código da carta (ex: B02): ");
    scanf("%s", carta2.codigo);

    printf("Informe o nome da cidade: ");
    scanf(" %[^\n]", carta2.nomeCidade);

    printf("Informe a população: ");
    scanf("%d", &carta2.populacao);

    printf("Informe a área (em km²): ");
    scanf("%f", &carta2.area);

    printf("Informe o PIB (em bilhões de reais): ");
    scanf("%f", &carta2.pib);

    printf("Informe o número de pontos turísticos: ");
    scanf("%d", &carta2.pontosTuristicos);


    // Exibição dos dados cadastrados
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", carta1.estado);
    printf("Código: %s\n", carta1.codigo);
    printf("Nome da Cidade: %s\n", carta1.nomeCidade);
    printf("População: %d\n", carta1.populacao);
    printf("Área: %.2f km²\n", carta1.area);
    printf("PIB: %.2f bilhões de reais\n", carta1.pib);
    printf("Número de Pontos Turísticos: %d\n", carta1.pontosTuristicos);

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", carta2.estado);
    printf("Código: %s\n", carta2.codigo);
    printf("Nome da Cidade: %s\n", carta2.nomeCidade);
    printf("População: %d\n", carta2.populacao);
    printf("Área: %.2f km²\n", carta2.area);
    printf("PIB: %.2f bilhões de reais\n", carta2.pib);
    printf("Número de Pontos Turísticos: %d\n", carta2.pontosTuristicos);

    return 0;
}
