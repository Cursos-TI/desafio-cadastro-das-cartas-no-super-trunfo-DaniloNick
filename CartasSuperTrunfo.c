#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas

//Declaracao das funcoes
float calcularDensidade(float populacao, float area);
float calcularpibPerCapta(float pib, float populacao);

int main() {
    
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    char codigoDaCidade[4];
    char nomeCidade[20];
    int populacao;
    float area;
    float pib;
    int pontoTuristico;
    float densidadePop;
    float pibPerCapta;
    
    // Cadastro das Cartas
    printf("Digite o codigo da cidade: ");
    scanf("%s", codigoDaCidade);
    printf("Digite o nome da cidade: ");
    scanf("%s", nomeCidade);
    printf("digite a quantidade da populacao de %s :", nomeCidade);
    scanf("%i", &populacao);
    printf("Digite a area de %s :", nomeCidade);
    scanf("%f", &area);
    printf("Digite o PIB de %s :", nomeCidade);
    scanf("%f", &pib);
    printf("Digite a quantidade de pontos turisticos de %s :", nomeCidade);
    scanf("%i", &pontoTuristico);


    //Calculos
    densidadePop = calcularDensidade(populacao,area);
    pibPerCapta = calcularpibPerCapta(pib,populacao);
    
    // Exibição dos Dados das Cartas
    printf("\nCarta Registrada!\n");
    printf("Codigo da cidade: %s\n" ,codigoDaCidade);
    printf("Nome da cidade: %s\n" , nomeCidade);
    printf("Populacao de %s: %i\n",nomeCidade,populacao);
    printf("Area de %s: %.2f km2\n",nomeCidade,area);
    printf("PIB de %s: R$ %.2f\n",nomeCidade,pib);
    printf("Pontos turisticos em %s: %i\n",nomeCidade,pontoTuristico);
    printf("Densidade Populacional: %.6f\n",densidadePop);
    printf("PIB per capita: R$ %.2f\n",pibPerCapta);

    return 0;
}

//Calculo de Densidade Populacional
float calcularDensidade(float populacao, float area){
     return populacao/area;
}

//Calculo de PIB per capita
float calcularpibPerCapta(float pib, float populacao){
     return pib/populacao;
}
