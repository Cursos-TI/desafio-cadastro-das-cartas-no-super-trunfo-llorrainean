#include <stdio.h>

int main() {
    printf("Desafio Super Trunfo\n");
    printf("Novo Commit\n");

    char estado[3];      // Ex: "SP"
    int codigo;          // Código da Cidade
    char cidade[50];     // Nome da Cidade
    long int populacao;  // População
    float area;          // Área em km²
    float pib;           // PIB em bilhões
    char turisticos[100]; // Pontos turísticos

    // Entrada de Dados
    printf("\nDigite os Dados da Carta 1\n");

    printf("Estado (Ex: SP):\n ");
    scanf("%2s", estado);

    printf("Código da Cidade: \n");
    scanf("%d", &codigo);

    printf("Nome da Cidade: \n");
    scanf("%s", cidade);

    printf("População: \n");
    scanf("%ld", &populacao);

    printf("Área (em Km²): \n ");
    scanf("%f", &area);

    printf("PIB (em bilhões): \n");
    scanf("%f", &pib);

    printf("Pontos Turísticos:\n ");
    scanf("%s", turisticos);

    // Exibindo os Dados
    printf("\n===== DADOS DA CIDADE =====\n");
    printf("Estado: %s\n", estado);
    printf("Código: %d\n", codigo);
    printf("Cidade: %s\n", cidade);
    printf("População: %ld habitantes\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: R$ %.2f bilhões\n", pib);
    printf("Pontos Turísticos: %s\n", turisticos);
    printf("============================\n");

    return 0;
}