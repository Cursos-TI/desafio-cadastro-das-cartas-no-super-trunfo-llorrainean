#include <stdio.h>

int main() {
    printf("Desafio Super Trunfo Carta 1\n");
    printf("Novo Commit\n");

    char estado;      // Ex: "SP"
    char codigo;     // Código da Cidade
    char cidade;     // Nome da Cidade
    int populacao;       // População
    float area;          // Área em km²
    float pib;           // PIB em bilhões
    int turisticos; // Pontos turísticos

    // Entrada de Dados
    printf("\nDigite os Dados da Carta 1\n");

    printf("Estado: (Ex:SP)\n ");
    scanf("%2s", estado);

    printf("Código da Cidade: \n");
    scanf("%2s", codigo);

    printf("Nome da Cidade: \n");
    scanf("%2s", cidade);

    printf("População: \n");
    scanf("%d", populacao);

    printf("Área (em Km²): \n ");
    scanf("%f", area);

    printf("PIB (em bilhões): \n");
    scanf("%f", pib);

    printf("Pontos Turísticos:\n ");
    scanf("%d", turisticos);

    // Exibindo os Dados
    printf("\n DADOS DA CIDADE \n");
    printf("Estado: %2s\n", estado);
    printf("Código: %2s\n", codigo);
    printf("Cidade: %2s\n", cidade);
    printf("População: %d\n", populacao);
    printf("Área: %f km²\n", area);
    printf("PIB: R$ %f bilhões\n", pib);
    printf("Pontos Turísticos: %d\n", turisticos);
   

    return 0;
}

#include<stdio.h>>
 
int main(){
    printf("Desafio do Super Trunfo Carta 2");

    char estado;         //Ex:"SP"
    char codigo;         // Codigo da cidade 
    char cidade;        // Nome da cidade
    int populacao;          //População     
    float area;             //Area em km2
    float pib;              //PIB em bilhões 
    int turisticos;    // Pontos Turisticos

    // Entrada de Dados 

    printf("\n Digite os Dados da Carta 2 \n");

    printf("Estado (Ex: CE): \n");
    scanf("%2s", estado);

    printf("Codigo da Cidade: \n");
    scanf("%2s", codigo);

    printf("Nome da Cidade: \n");
    scanf("%2s", cidade);

    printf("População: \n");
    scanf("%d", populacao);

    printf("Area (km2): \n");
    scanf("%f", area);

    printf("PIB (em bilhões): \n");
    scanf("%f", pib);

    printf("Pontos Turisticos: \n");
    scanf("%d", turisticos);

    //Exibindo os Dados
    printf("\n DADOS DA CIDADE\n");

    printf("Estado: %2s\n", estado);
    printf("Codigo: %2s\n", codigo);
    printf("Cidade %2s\n", cidade );
    printf("Populaçao: %d\n", populacao);
    printf("Área: %f km2 \n", area);
    printf("PIB: R$ %f bilhões\n", pib);
    printf("Pontos Turisticos: %d\n", turisticos);

    return 0;



}
