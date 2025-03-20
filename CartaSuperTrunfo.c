#include <stdio.h>

int main() {
    printf("Desafio Super Trunfo\n");
    printf("Novo Commit\n");

    char estado[3];      // Ex: "SP"
    int codigo;          // Código da Cidade
    char cidade[50];     // Nome da Cidade
    float populacao;  // População
    float area;          // Área em km²
    float pib;           // PIB em bilhões
    char turisticos[100]; // Pontos turísticos

    // Entrada de Dados
    printf("\nDigite os Dados da Carta 1\n");

    printf("Estado (Ex: SP):\n ");
    scanf("%c", &estado);

    printf("Código da Cidade: \n");
    scanf("%d",&codigo);

    printf("Nome da Cidade: \n");
    scanf("%c",&cidade);

    printf("População: \n");
    scanf("%f", &populacao);

    printf("Área (em Km²): \n ");
    scanf("%f", &area);

    printf("PIB (em bilhões): \n");
    scanf("%f", &pib);

    printf("Pontos Turísticos:\n ");
    scanf("%f", &turisticos);

    // Exibindo os Dados
    printf("\n===== DADOS DA CIDADE =====\n");
    printf("Estado: %c\n", estado);
    printf("Código: %c\n", codigo);
    printf("Cidade: %c\n", cidade);
    printf("População: %f habitantes\n", populacao);
    printf("Área: %f km²\n", area);
    printf("PIB: R$ %f bilhões\n", pib);
    printf("Pontos Turísticos: %f\n", turisticos);
    printf("============================\n");

    return 0;
}