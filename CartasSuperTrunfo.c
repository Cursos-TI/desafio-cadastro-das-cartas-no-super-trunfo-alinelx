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
    unsigned long int populacao1, populacao2;
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
    scanf("%lu", &populacao1);

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
    scanf("%lu", &populacao2);

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

    // Cálculo de densidade e PIB per capita
    float densidade1 = populacao1/areakm1;
    float densidade2 = populacao2/areakm2;
    float pibpercapita1 = (pib1*1000000000)/populacao1;
    float pibpercapita2 = (pib2*1000000000)/populacao2;

    printf("\nCARTAS CADASTRADAS\n\n");
    printf("CARTA 1\n\nEstado: %c\nCódigo: %s\nNome da Cidade: %s\nPopulação: %lu\nÁrea: %.2f km²\nPIB: %.2f bilhões de reais\nNúmero de Pontos Turísticos: %d\nDensidade Populacional: %.2f hab/km²\nPIB per Capita: %.2f reais\n\n============\n\n", estado1, codigo1, cidade1, populacao1, areakm1, pib1, pontoturistico1, densidade1, pibpercapita1);
    printf("CARTA 2\n\nEstado: %c\nCódigo: %s\nNome da Cidade: %s\nPopulação: %lu\nÁrea: %.2f km²\nPIB: %.2f bilhões de reais\nNúmero de Pontos Turísticos: %d\nDensidade Populacional: %.2f hab/km²\nPIB per Capita: %.2f reais\n\n============\n\n", estado2, codigo2, cidade2, populacao2, areakm2, pib2, pontoturistico2, densidade2, pibpercapita2);
    
    float superpoder1, superpoder2;
    superpoder1 = (float)populacao1+areakm1+pib1+(float)pontoturistico1+pibpercapita1+(areakm1/(float)populacao1);
    superpoder2 = (float)populacao2+areakm2+pib2+(float)pontoturistico2+pibpercapita2+(areakm2/(float)populacao2);
    printf("Super Poder:\n\nCarta 1: %.2f\n\nCarta 2: %.2f\n\n============\n\n",superpoder1,superpoder2);
    printf("\nComparação de Cartas:\n\n");
    printf("População: Carta 1 venceu (%d)\n",populacao1>populacao2);
    printf("Área: Carta 1 venceu (%d)\n",areakm1>areakm2);
    printf("PIB: Carta 1 venceu (%d)\n",pib1>pib2);
    printf("Pontos Turísticos: Carta 1 venceu (%d)\n",pontoturistico1>pontoturistico2);
    printf("Densidade Populacional: Carta 2 venceu (%d)\n",densidade1<densidade2);
    printf("PIB per Capita: Carta 1 venceu (%d)\n",pibpercapita1>pibpercapita2);
    printf("Super Poder: Carta 1 venceu (%d)\n",superpoder1>superpoder2);
    return 0;
}
