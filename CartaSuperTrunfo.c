#include <stdio.h>

int main() {
    printf("Desafio Super Trunfo Carta 1\n");
    printf("Novo Commit\n");

    char estado;      // Ex: "SP"
    int codigo;          // Código da Cidade
    char cidade[50];     // Nome da Cidade
    int populacao;       // População
    float area;          // Área em km²
    float pib;           // PIB em bilhões
    int turisticos[100]; // Pontos turísticos

    // Entrada de Dados
    printf("\nDigite os Dados da Carta 1\n");

    printf("Estado (Ex: SP):\n ");
    scanf("estado: %c\n", estado);

    printf("Código da Cidade: \n");
    scanf("%d", codigo);

    printf("Nome da Cidade: \n");
    scanf("%c", cidade);

    printf("População: \n");
    scanf("%d", populacao);

    printf("Área (em Km²): \n ");
    scanf("%f", area);

    printf("PIB (em bilhões): \n");
    scanf("%f", pib);

    printf("Pontos Turísticos:\n ");
    scanf("%d", turisticos);

    // Exibindo os Dados
    printf("\n===== DADOS DA CIDADE =====\n");
    printf("Estado: %s\n", estado);
    printf("Código: %c\n", codigo);
    printf("Cidade: %c\n", cidade);
    printf("População: %d habitantes\n", populacao);
    printf("Área: %f km²\n", area);
    printf("PIB: R$ %f bilhões\n", pib);
    printf("Pontos Turísticos: %d\n", turisticos);
    printf("============================\n");

    return 0;
}

#include<stdio.h>>
 
int main(){
    printf("Desafio do Super Trunfo Carta 2");

    char estado;        //Estado
    char codigo;        // Codigo da carta 
    char cidade;        // Nome da cidade
    int população;      //População     
    float area;         //Area
    float pib;          //PIB
    int turisticos;     // Pontos Turisticos

}
