#include <stdio.h>
#include <string.h>

// Estrutura para Armazenar dados da Cidade 
int main() {
    printf("Desafio Super Trunfo\n");
    printf("Novo Commit\n");

    char estado[3];      // Ex: "SP"
    int codigo;          // Código da Cidade
    char cidade[50];     // Nome da Cidade
    long int populacao;  // População (pode ser grande)
    float area;          // Área em km²
    float pib;           // PIB em bilhões
    char turisticos[100]; // Pontos turísticos

    // Entrada de Dados
    printf("\nDigite os Dados da Carta 1\n");

    printf("Estado (Ex: SP): ");
    scanf("%2s", estado);

    printf("Código da Cidade: ");
    scanf("%d", &codigo);
    getchar(); // Limpa buffer do teclado

    printf("Nome da Cidade: ");
    fgets(cidade, sizeof(cidade), stdin);
    cidade[strcspn(cidade, "\n")] = '\0'; // Remove \n do fgets

    printf("População: ");
    scanf("%ld", &populacao);

    printf("Área (em Km²): ");
    scanf("%f", &area);

    printf("PIB (em bilhões): ");
    scanf("%f", &pib);
    getchar(); // Limpa buffer do teclado

    printf("Pontos Turísticos: ");
    fgets(turisticos, sizeof(turisticos), stdin);
    turisticos[strcspn(turisticos, "\n")] = '\0'; // Remove \n do fgets

    // Exibindo

}