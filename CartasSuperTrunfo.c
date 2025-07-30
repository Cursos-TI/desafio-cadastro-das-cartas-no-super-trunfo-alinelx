#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    char estado1, estado2;
    char codigo1[4], codigo2[4];
    char cidade1[100], cidade2[100];
    int populacao1, populacao2;
    float areakm1, areakm2;
    float pib1, pib2;
    int pontoturistico1, pontoturistico2;
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.

    //Carta 1
    printf("Cadastro da CARTA 1\n\nDigite o ESTADO da carta 1 (1 letra de A-H): ");
    scanf(" %c", &estado1);

    printf("\nDigite o CÓDIGO da carta 1\nA letra do estado seguida de um número de 01 a 04 (ex: A01, B03): ");
    scanf("%s", codigo1);

    printf("\nDigite o NOME DA CIDADE da carta 1: ");
    scanf(" %[^\n]", cidade1);

    printf("\nDigite a POPULAÇÃO da carta 1: ");
    scanf("%d", &populacao1);

    printf("\nDigite a ÁREA EM KM da carta 1\nApenas número, dividido por . (ex. 123.12): ");
    scanf("%f", &areakm1);

    printf("\nDigite o PIB (em bilhões de reais) da carta 1\nApenas número, dividido por . (ex. 123.12):  ");
    scanf("%f", &pib1);

    printf("\nDigite o NÚMERO DE PONTOS TURÍSTICOS da carta 1: ");
    scanf("%d", &pontoturistico1);

    //Carta 2
    printf("\nCARTA 1 cadastrada com sucesso!\n\n============\n\nCadastro da CARTA 2\n\nDigite o ESTADO da carta 2 (1 letra de A-H): ");
    scanf(" %c", &estado2);

    printf("\nDigite o CÓDIGO da carta 2\nA letra do estado seguida de um número de 01 a 04 (ex: A01, B03): ");
    scanf("%s", codigo2);

    printf("\nDigite o NOME DA CIDADE da carta 2: ");
    scanf(" %[^\n]", cidade2);

    printf("\nDigite a POPULAÇÃO da carta 2: ");
    scanf("%d", &populacao2);

    printf("\nDigite a ÁREA EM KM da carta 2\nApenas número, dividido por . (ex. 123.12):  ");
    scanf("%f", &areakm2);

    printf("\nDigite o PIB (em bilhões de reais) da carta 2\nApenas número, dividido por . (ex. 123.12):  ");
    scanf("%f", &pib2);

    printf("\nDigite o NÚMERO DE PONTOS TURÍSTICOS da carta 2: ");
    scanf("%d", &pontoturistico2);
    
    printf("\nCarta 2 cadastrada com sucesso!\n\n============\n\n");
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    printf("\nCARTAS CADASTRADAS\n");
    printf("\nCARTA 1\n\nEstado: %c\nCódigo: %s\nNome da Cidade: %s\nPopulação: %d\nÁrea: %.2f km²\nPIB: %.2f bilhões de reais\nNúmero de Pontos Turísticos: %d\n\n============\n\n", estado1, codigo1, cidade1, populacao1, areakm1, pib1, pontoturistico1);
    printf("CARTA 2\n\nEstado: %c\nCódigo: %s\nNome da Cidade: %s\nPopulação: %d\nÁrea: %.2f km²\nPIB: %.2f bilhões de reais\nNúmero de Pontos Turísticos: %d\n\n============\n\n", estado2, codigo2, cidade2, populacao2, areakm2, pib2, pontoturistico2);
    return 0;
}
