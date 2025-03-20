#include <stdio.h>

int main() {
    printf("Desafio Super Trunfo Carta 1\n");
    printf("Novo Commit\n");

    char estado[3];      // Ex: "SP"
    int codigo;          // Código da Cidade
    char cidade[50];     // Nome da Cidade
    int populacao;       // População
    float area;          // Área em km²
    float pib;           // PIB em bilhões
    int turisticos[100]; // Pontos turísticos

    // Entrada de Dados
    printf("\nDigite os Dados da Carta 1\n");

    printf("Estado (Ex: SP):\n ");
    scanf("estado: %c\n");

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
    printf("\n DADOS DA CIDADE \n");
    printf("Estado: %s\n", estado);
    printf("Código: %c\n", codigo);
    printf("Cidade: %c\n", cidade);
    printf("População: %d\n", populacao);
    printf("Área: %f km²\n", area);
    printf("PIB: R$ %f bilhões\n", pib);
    printf("Pontos Turísticos: %d\n", turisticos);
   

    return 0;
}

#include<stdio.h>>
 
int main(){
    printf("Desafio do Super Trunfo Carta 2");

    char estado[3];         //Ex:"SP"
    char codigo[4];         // Codigo da cidade 
    char cidade[50];        // Nome da cidade
    int populacao;          //População     
    float area;             //Area em km2
    float pib;              //PIB em bilhões 
    int turisticos[100];    // Pontos Turisticos

    // Entrada de Dados 

    printf("\n Digite os Dados da Carta 2 \n");

    printf("Estado (Ex: CE): \n");
    scanf("%c", estado);

    printf("Codigo da Cidade: \n");
    scanf("%c", codigo);

    printf("Nome da Cidade: \n");
    scanf("%c", cidade);

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

    printf("Estado: %c\n", estado);
    printf("Codigo: %c\n", codigo);
    printf("Cidade %c\n", cidade );
    printf("Populaçao: %d\n", populacao);
    printf("Área: %f km2 \n", area);
    printf("PIB: R$ %f bilhões\n", pib);
    printf("Pontos Turisticos: %d\n", turisticos);

    return 0;



}
