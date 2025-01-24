#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    char codigoDaCidade[4];
    char nomeCidade[20];
    int populacao;
    float area;
    float pib;
    int pontoTuristico;
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    printf("Digite o codigo da cidade: ");
    scanf("%s", &codigoDaCidade);
    printf("Digite o nome da cidade: ");
    scanf("%s", &nomeCidade);
    printf("digite a quantidade da populacao de %S :", nomeCidade);
    scanf("%i", &populacao);
    printf("Digite a area de %s :", nomeCidade);
    scanf("%f", &area);
    printf("Digite o PIB de %s :", nomeCidade);
    scanf("%f", &pib);
    printf("Digite a quantidade de pontos turisticos de %s :", nomeCidade);
    scanf("%i", &pontoTuristico);
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    printf("\nCarta Registrada!\n");
    printf("Codigo da cidade: %s\n" ,codigoDaCidade);
    printf("Nome da cidade: %s\n" , nomeCidade);
    printf("Populacao de %s: %i\n",nomeCidade,populacao);
    printf("Area de %s: %.6f\n",nomeCidade,area);
    printf("PIB de %s: %.6f\n",nomeCidade,pib);
    printf("Pontos turisticos em %s: %i\n",nomeCidade,pontoTuristico);

    return 0;
}
