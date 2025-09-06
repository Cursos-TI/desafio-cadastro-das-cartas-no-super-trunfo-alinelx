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

    // Cálculo de densidade e PIB per capita
    float densidade1 = populacao1/areakm1;
    float densidade2 = populacao2/areakm2;
    float pibpercapita1 = (pib1*1000000000)/populacao1;
    float pibpercapita2 = (pib2*1000000000)/populacao2;

    int atributo;
    printf("Escolha o atributo de comparação:\n1. População\n2. Área\n3. PIB\n4. Número de pontos turísticos\n5. Densidade demográfica\n");
    scanf("%d", &atributo);

    switch (atributo)
    {
    case 1:
        if (populacao1>populacao2){
            printf("Comparação de cartas\n\nAtributo: População\n\nCarta 1 - %s: %d\nCarta 2 - %s: %d\nResultado: Carta 1 (%s) venceu!\n\n============\n\n", cidade1, populacao1, cidade2, populacao2, cidade1);
        }else{
            if(populacao1<populacao2){
                printf("Comparação de cartas\n\nAtributo: População\n\nCarta 1 - %s: %d\nCarta 2 - %s: %d\nResultado: Carta 2 (%s) venceu!\n\n============\n\n", cidade1, populacao1, cidade2, populacao2, cidade2);
            }else{
                printf("Comparação de cartas\n\nAtributo: População\n\nCarta 1 - %s: %d\nCarta 2 - %s: %d\nResultado: Empate!\n\n============\n\n", cidade1, populacao1, cidade2, populacao2);
            }
        }
        break;
    case 2:
        if (areakm1>areakm2){
            printf("Comparação de cartas\n\nAtributo: Área\n\nCarta 1 - %s: %.2f\nCarta 2 - %s: %.2f\nResultado: Carta 1 (%s) venceu!\n\n============\n\n", cidade1, areakm1, cidade2, areakm2, cidade1);
        }else{
            if(areakm1<areakm2){
                printf("Comparação de cartas\n\nAtributo: Área\n\nCarta 1 - %s: %.2f\nCarta 2 - %s: %.2f\nResultado: Carta 2 (%s) venceu!\n\n============\n\n", cidade1, areakm1, cidade2, areakm2, cidade2);
            }else{
                printf("Comparação de cartas\n\nAtributo: Área\n\nCarta 1 - %s: %.2f\nCarta 2 - %s: %.2f\nResultado: Empate!\n\n============\n\n", cidade1, areakm1, cidade2, areakm2);
            }
        }
        break;
    case 3:
        if (pib1>pib2){
            printf("Comparação de cartas\n\nAtributo: PIB\n\nCarta 1 - %s: %.2f\nCarta 2 - %s: %.2f\nResultado: Carta 1 (%s) venceu!\n\n============\n\n", cidade1, pib1, cidade2, pib2, cidade1);
        }else{
            if(pib1<pib2){
                printf("Comparação de cartas\n\nAtributo: PIB\n\nCarta 1 - %s: %.2f\nCarta 2 - %s: %.2f\nResultado: Carta 2 (%s) venceu!\n\n============\n\n", cidade1, pib1, cidade2, pib2, cidade2);
            }else{
                printf("Comparação de cartas\n\nAtributo: PIB\n\nCarta 1 - %s: %.2f\nCarta 2 - %s: %.2f\nResultado: Empate!\n\n============\n\n", cidade1, pib1, cidade2, pib2);
            }
        }
        break;
    case 4:
        if (pontoturistico1>pontoturistico2){
            printf("Comparação de cartas\n\nAtributo: Número de pontos turísticos\n\nCarta 1 - %s: %d\nCarta 2 - %s: %d\nResultado: Carta 1 (%s) venceu!\n\n============\n\n", cidade1, pontoturistico1, cidade2, pontoturistico2, cidade1);
        }else{
            if(pontoturistico1<pontoturistico2){
                printf("Comparação de cartas\n\nAtributo: Número de pontos turísticos\n\nCarta 1 - %s: %d\nCarta 2 - %s: %d\nResultado: Carta 2 (%s) venceu!\n\n============\n\n", cidade1, pontoturistico1, cidade2, pontoturistico2, cidade2);
            }else{
                printf("Comparação de cartas\n\nAtributo: Número de pontos turísticos\n\nCarta 1 - %s: %d\nCarta 2 - %s: %d\nResultado: Empate!\n\n============\n\n", cidade1, pontoturistico1, cidade2, pontoturistico2);
            }
        }
        break;
    case 5:
        if (densidade1>densidade2){
            printf("Comparação de cartas\n\nAtributo: Densidade demográfica\n\nCarta 1 - %s: %.2f\nCarta 2 - %s: %.2f\nResultado: Carta 2 (%s) venceu!\n\n============\n\n", cidade1, densidade1, cidade2, densidade2, cidade2);
        }else{
            if(pontoturistico1<pontoturistico2){
                printf("Comparação de cartas\n\nAtributo: Densidade demográfica\n\nCarta 1 - %s: %.2f\nCarta 2 - %s: %.2f\nResultado: Carta 1 (%s) venceu!\n\n============\n\n", cidade1, densidade1, cidade2, densidade2, cidade1);
            }else{
                printf("Comparação de cartas\n\nAtributo: Densidade demográfica\n\nCarta 1 - %s: %.2f\nCarta 2 - %s: %.2f\nResultado: Empate!\n\n============\n\n", cidade1, densidade1, cidade2, densidade2);
            }
        }
        break;            
    default:
        printf("Opção inválida");
        break;
    }

    return 0;
}
