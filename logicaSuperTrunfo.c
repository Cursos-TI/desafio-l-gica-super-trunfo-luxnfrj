#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio
    int populacaoA, populacaoB, pontosTuristicosA, pontosTuristicosB;
    char codigoEstadoA, codigoEstadoB, codigoCidadeA[5], codigoCidadeB[5], nomeA[50], nomeB[50];
    double areaA, areaB, PIBA, PIBB, densidadeA, densidadeB, perCapitaA, perCapitaB;
        
    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio
    
    //Cadastro da Carta 1:
    printf("\nCADASTRE A PRIMEIRA CARTA\n");

    printf("Digite o código do Estado (A-H): \n");
    scanf(" %c", &codigoEstadoA);

    printf("Digite o código da cidade (A-H + 01-04): \n");
    scanf("%s", codigoCidadeA);

    printf("Digite o nome da cidade: \n");
    scanf("%49s", nomeA);

    printf("Digite a população da cidade: \n");
    scanf("%d", &populacaoA);

    printf("Digite a área da cidade (em km2): \n");
    scanf("%lf", &areaA);

    printf("Digite o PIB da cidade: \n");
    scanf("%lf", &PIBA);

    printf("Digite o número de pontos turísticos da cidade: \n");
    scanf("%d", &pontosTuristicosA);

    // Cálculos da densidade populacional e PIB per capita
    densidadeA = (double)populacaoA / areaA;
    perCapitaA = (double)PIBA / populacaoA;

    //Cadastro da Carta 2:
    printf("\nCADASTRE A SEGUNDA CARTA\n");

    printf("Digite o código do Estado (A-H): \n");
    scanf(" %c", &codigoEstadoB);

    printf("Digite o código da cidade (A-H + 01-04): \n");
    scanf("%s", codigoCidadeB);

    printf("Digite o nome da cidade: \n");
    scanf("%49s", nomeB);

    printf("Digite a população da cidade: \n");
    scanf("%d", &populacaoB);

    printf("Digite a área da cidade (em km2): \n");
    scanf("%lf", &areaB);

    printf("Digite o PIB da cidade: \n");
    scanf("%lf", &PIBB);

    printf("Digite o número de pontos turísticos da cidade: \n");
    scanf("%d", &pontosTuristicosB);

    // Cálculos da densidade populacional e PIB per capita
    densidadeB = (double)populacaoB / areaB;
    perCapitaB = (double)PIBB / populacaoB;

    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

    if (populacaoA > populacaoB) {
         printf("Cidade 1 tem maior população.\n");
    }   else {
         printf("Cidade 2 tem maior população.\n");
        }
    
    if (areaA > areaB) {
         printf("Cidade 1 tem área maior.\n");
    }   else {
         printf("Cidade 2 tem área.\n");
        }
    
    if (PIBA > PIBB) {
         printf("Cidade 1 tem maior PIB.\n");
    }   else {
         printf("Cidade 2 tem maior PIB.\n");
        }
    
    if (pontosTuristicosA > pontosTuristicosB) {
         printf("Cidade 1 tem área maior.\n");
    }   else {
         printf("Cidade 2 tem área.\n");
        }
    
    if (densidadeA > densidadeB) {
         printf("Cidade 1 tem maior densidade populacional.\n");
    }   else {
         printf("Cidade 2 tem menor densidade populacional.\n");
        }

    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    
    if (populacaoA > populacaoB && areaA > areaB){
        printf("\nA cidade vencedora é: %s\n", nomeA);
    } else (populacaoB > populacaoA && areaB > areaA); {
        printf("\nA cidade vencedora é: %s\n", nomeB);
    }
    return 0;
}
