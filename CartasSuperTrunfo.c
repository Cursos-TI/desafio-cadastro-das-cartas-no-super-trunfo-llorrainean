#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
#include <stdio.h>
#include <string.h>

// Estrutura para Armazenar dados da Cidade 

int main(){
    printf("Desafio Super trunfo");
    printf("Novo Commit \n");

    char estado[3];      //Ex "SP"
    char codigo;         //Código da Cidade
    char cidade[50];     // Nome da Cidade 
    int populacao;       // População 
    float area;          // Area em Km2
    float pib;           // PIB em bilhões 
    int turisticos[100]; // Pontos Turisticos 

    //Entrada de Dados
    //Carta 1

    printf("Digite os Dados da Carta %d \n");

    printf("Estado: ");
    scanf("%d", estado);

    printf("Codigo da Cidade:" );
    scanf("%d", codigo);

    printf("Nome da Cidade:" );
    scanf("%d", cidade);

    printf("População:" );
    scanf("%f", populacao);

    printf("Área (em Km2): ");
    scanf("%f", area);

    printf("PIB (Em Bilhões): ");
    scanf("%f", pib);

    printf("Pontos Turisticos:" );
    scanf("%d", turisticos);

    //Exibindo os Dados Carta 1

    printf("\nEstado: %c\n", estado);
    printf("Codigo: %d\n", codigo);
    printf("Cidade: %c\n", cidade);
    printf("População: %f", populacao);
    printf("Área: %f km2\n", area);
    printf("PIB: R$. %f bilhões\n", pib);
    printf("Pontos Turisticos: %s\n", turisticos);

    return 0;
}