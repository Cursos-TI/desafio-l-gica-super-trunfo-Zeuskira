#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das cartas
// Nivel mestre



int main() {

    // Área para definição das variáveis do primeiro país/carta

    char pais_1[30]="Brasil";
    int populacao_1= 213317639;
    float area_1= 8515767;
    float pib_1= 24884.7;
    int n_pontos_turisticos_1= 744;
    float densidade_demografica_1= (float)populacao_1 / area_1;
    

    // Área para definição das variáveis do segundo país/carta

    char pais_2[30]="Argentina";
    int populacao_2= 451954777;
    float area_2= 2780400;
    float pib_2= 14496.0;
    int n_pontos_turisticos_2= 30;
    float densidade_demografica_2= (float)populacao_2 / area_2;
    
    // Criação do menu
    
    int opcao; //criacao das variaveis para entrada de dados do menu
    int opcao2;
    printf("\n***Menu de comparação das cartas***\n"); //menu do primeiro atributo
    printf("\nEscolha um atributo para comparar:\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Número de Pontos Turísticos\n");
    printf("5. Densidade Demográfica\n");
    printf("Opção: ");
    scanf("%d", &opcao);

    for (int i = 1; i <= 5; i++) { //menu do segundo atributo dinamico, senti necessidade de usar loop
        if (i != opcao) { // só mostra atributos diferentes do primeiro
            switch(i) {
                case 1: 
                printf("1 - Populacao\n"); 
                break;
                case 2: 
                printf("2 - Area\n"); 
                break;
                case 3: 
                printf("3 - PIB\n"); 
                break;
                case 4: 
                printf("4 - Pontos Turisticos\n"); 
                break;
                case 5: 
                printf("5 - Densidade Demografica\n"); 
                break;
                
            }
        }
    }
    printf("Opção: ");
    scanf("%d", &opcao2);
    if (opcao2 == opcao || opcao2 < 1 || opcao2 > 5) { //se a opcao2 for igual a opcao1 ou opcao2 for menor que 1 ou maior que 5, é invalida
        printf("Opção inválida!\n");
        return 1; // Encerra o programa em caso de opção inválida
    }

    // Comparação do primeiro atributo escolhido
        printf("\nComparação dos atributos escolhidos:\n");
    switch (opcao) {
        case 1:
            printf("O primeiro atributo escolhido foi: População.\n");
            printf("Carta 1 (Brasil) - %s: %d habitantes\n", pais_1, populacao_1);
            printf("Carta 2 (Argentina) - %s: %d habitantes\n", pais_2, populacao_2);
            populacao_1 > populacao_2 ? printf("Brasil vence com uma população de %d, maior que Argentina.\n", populacao_1) :
            printf("Argentina vence com uma população de %d, maior que Brasil.\n", populacao_2);
            break;
        case 2:
            printf("O primeiro atributo escolhido foi: Área.\n");
            printf("Carta 1 (Brasil) - %s: %.2f km²\n", pais_1, area_1);
            printf("Carta 2 (Argentina) - %s: %.2f km²\n", pais_2, area_2);
            area_1 > area_2 ? printf("Brasil vence com uma área de %.2f km², maior que Argentina.\n", area_1) :
            printf("Argentina vence com uma área de %.2f km², maior que Brasil.\n", area_2);
            break;
        case 3:
            printf("O primeiro atributo escolhido foi: PIB.\n");
            printf("Carta 1 (Brasil) - %s: %.2f bilhões de dólares\n", pais_1, pib_1);
            printf("Carta 2 (Argentina) - %s: %.2f bilhões de dólares\n", pais_2, pib_2);
            pib_1 > pib_2 ? printf("Brasil vence com um PIB de %.2f bilhões, maior que Argentina.\n", pib_1) :
            printf("Argentina vence com um PIB de %.2f bilhões, maior que Brasil.\n", pib_2);
            break;
        case 4:
            printf("O primeiro atributo escolhido foi: Número de Pontos Turísticos.\n");
            printf("Carta 1 (Brasil) - %s: %d pontos turísticos\n", pais_1, n_pontos_turisticos_1);
            printf("Carta 2 (Argentina) - %s: %d pontos turísticos\n", pais_2, n_pontos_turisticos_2);
            n_pontos_turisticos_1 > n_pontos_turisticos_2 ? printf("Brasil vence com %d pontos turísticos, maior que Argentina.\n", n_pontos_turisticos_1) :
            printf("Argentina vence com %d pontos turísticos, maior que Brasil.\n", n_pontos_turisticos_2);
            break;
        case 5:
            printf("O primeiro atributo escolhido foi: Densidade Demográfica.\n"); //Em densidade demografica, o menor valor vence
            printf("Carta 1 (Brasil) - %s: %.2f habitantes/km²\n", pais_1, densidade_demografica_1);
            printf("Carta 2 (Argentina) - %s: %.2f habitantes/km²\n", pais_2, densidade_demografica_2);
            densidade_demografica_1 < densidade_demografica_2 ? printf("Brasil vence com uma densidade demográfica de %.2f habitantes/km², menor que a da Argentina.\n", densidade_demografica_1) :
            printf("Argentina vence com uma densidade demográfica de %.2f habitantes/km², menor que a do Brasil.\n", densidade_demografica_2);
            break;
        
            
    }
    switch (opcao2) { //comparacao do segundo atributo escolhido
        case 1:
            printf("O primeiro atributo escolhido foi: População.\n");
            printf("Carta 1 (Brasil) - %s: %d habitantes\n", pais_1, populacao_1);
            printf("Carta 2 (Argentina) - %s: %d habitantes\n", pais_2, populacao_2);
            populacao_1 > populacao_2 ? printf("Brasil vence com uma população de %d, maior que Argentina.\n", populacao_1) :
            printf("Argentina vence com uma população de %d, maior que Brasil.\n", populacao_2);
            break;
        case 2:
            printf("O primeiro atributo escolhido foi: Área.\n");
            printf("Carta 1 (Brasil) - %s: %.2f km²\n", pais_1, area_1);
            printf("Carta 2 (Argentina) - %s: %.2f km²\n", pais_2, area_2);
            area_1 > area_2 ? printf("Brasil vence com uma área de %.2f km², maior que Argentina.\n", area_1) :
            printf("Argentina vence com uma área de %.2f km², maior que Brasil.\n", area_2);
            break;
        case 3:
            printf("O primeiro atributo escolhido foi: PIB.\n");
            printf("Carta 1 (Brasil) - %s: %.2f bilhões de dólares\n", pais_1, pib_1);
            printf("Carta 2 (Argentina) - %s: %.2f bilhões de dólares\n", pais_2, pib_2);
            pib_1 > pib_2 ? printf("Brasil vence com um PIB de %.2f bilhões, maior que Argentina.\n", pib_1) :
            printf("Argentina vence com um PIB de %.2f bilhões, maior que Brasil.\n", pib_2);
            break;
        case 4:
            printf("O primeiro atributo escolhido foi: Número de Pontos Turísticos.\n");
            printf("Carta 1 (Brasil) - %s: %d pontos turísticos\n", pais_1, n_pontos_turisticos_1);
            printf("Carta 2 (Argentina) - %s: %d pontos turísticos\n", pais_2, n_pontos_turisticos_2);
            n_pontos_turisticos_1 > n_pontos_turisticos_2 ? printf("Brasil vence com %d pontos turísticos, maior que Argentina.\n", n_pontos_turisticos_1) :
            printf("Argentina vence com %d pontos turísticos, maior que Brasil.\n", n_pontos_turisticos_2);
            break;
        case 5:
            printf("O primeiro atributo escolhido foi: Densidade Demográfica.\n"); //Em densidade demografica, o menor valor vence
            printf("Carta 1 (Brasil) - %s: %.2f habitantes/km²\n", pais_1, densidade_demografica_1);
            printf("Carta 2 (Argentina) - %s: %.2f habitantes/km²\n", pais_2, densidade_demografica_2);
            densidade_demografica_1 < densidade_demografica_2 ? printf("Brasil vence com uma densidade demográfica de %.2f habitantes/km², menor que a da Argentina.\n", densidade_demografica_1) :
            printf("Argentina vence com uma densidade demográfica de %.2f habitantes/km², menor que a do Brasil.\n", densidade_demografica_2);
            break;
    }
        printf("\nSoma dos atributos escolhidos:\n");

    if (opcao == 1 && opcao2 == 2) { //usando operadores logicos e relacionais para comparar a entrada de dados do menu
        printf("Carta 1 (Brasil) - atributo população(%d) + área (%.2f): %.2f\n", populacao_1, area_1, (float)populacao_1 + area_1);
        printf("Carta 2 (Argentina) - atributo população(%d) + área (%.2f): %.2f\n", populacao_2, area_2, (float)populacao_2 + area_2);
        (float)populacao_1 + area_1 > (float)populacao_2 + area_2 ? printf("Brasil vence com a soma dos atributos: %.2f\n", (float)populacao_1 + area_1) :
        printf("Argentina vence com a soma dos atributos: %.2f\n", (float)populacao_2 + area_2);
    }   else if (opcao == 1 && opcao2 == 3) {
        printf("Carta 1 (Brasil) - atributo população(%d) + PIB (%.2f): %.2f\n", populacao_1, pib_1, (float)populacao_1 + pib_1);
        printf("Carta 2 (Argentina) - atributo população(%d) + PIB (%.2f): %.2f\n", populacao_2, pib_2, (float)populacao_2 + pib_2);
        (float)populacao_1 + pib_1 > (float)populacao_2 + pib_2 ? printf("Brasil vence com a soma dos atributos: %.2f\n", (float)populacao_1 + pib_1) :
        printf("Argentina vence com a soma dos atributos: %.2f\n", (float)populacao_2 + pib_2);
    }   else if (opcao == 1 && opcao2 == 4) {
        printf("Carta 1 (Brasil) - atributo população(%d) + número de pontos turísticos (%d): %.2f\n", populacao_1, n_pontos_turisticos_1, (float)populacao_1 + n_pontos_turisticos_1);
        printf("Carta 2 (Argentina) - atributo população(%d) + número de pontos turísticos (%d): %.2f\n", populacao_2, n_pontos_turisticos_2, (float)populacao_2 + n_pontos_turisticos_2);
        (float)populacao_1 + n_pontos_turisticos_1 > (float)populacao_2 + n_pontos_turisticos_2 ? printf("Brasil vence com a soma dos atributos: %.2f\n", (float)populacao_1 + n_pontos_turisticos_1) :
        printf("Argentina vence com a soma dos atributos: %.2f\n", (float)populacao_2 + n_pontos_turisticos_2);
    }   else if (opcao == 1 && opcao2 == 5) {
        printf("Carta 1 (Brasil) - atributo população(%d) + densidade demográfica (%.2f): %.2f\n", populacao_1, densidade_demografica_1, (float)populacao_1 + densidade_demografica_1);
        printf("Carta 2 (Argentina) - atributo população(%d) + densidade demográfica (%.2f): %.2f\n", populacao_2, densidade_demografica_2, (float)populacao_2 + densidade_demografica_2);
        (float)populacao_1 + densidade_demografica_1 > (float)populacao_2 + densidade_demografica_2 ? printf("Brasil vence com a soma dos atributos: %.2f\n", (float)populacao_1 + densidade_demografica_1) :
        printf("Argentina vence com a soma dos atributos: %.2f\n", (float)populacao_2 + densidade_demografica_2);
    }
    if (opcao == 2 && opcao2 == 1) {
        printf("Carta 1 (Brasil) - atributo área(%.2f) + população (%d): %.2f\n", area_1, populacao_1, (float)area_1 + populacao_1);
        printf("Carta 2 (Argentina) - atributo área(%.2f) + população (%d): %.2f\n", area_2, populacao_2, (float)area_2 + populacao_2);
        (float)area_1 + populacao_1 > (float)area_2 + populacao_2 ? printf("Brasil vence com a soma dos atributos: %.2f\n", (float)area_1 + populacao_1) :
        printf("Argentina vence com a soma dos atributos: %.2f\n", (float)area_2 + populacao_2);
    } else if (opcao == 2 && opcao2 == 3) {
        printf("Carta 1 (Brasil) - atributo área(%.2f) + PIB (%.2f): %.2f\n", area_1, pib_1, (float)area_1 + pib_1);
        printf("Carta 2 (Argentina) - atributo área(%.2f) + PIB (%.2f): %.2f\n", area_2, pib_2, (float)area_2 + pib_2);
        (float)area_1 + pib_1 > (float)area_2 + pib_2 ? printf("Brasil vence com a soma dos atributos: %.2f\n", (float)area_1 + pib_1) :
        printf("Argentina vence com a soma dos atributos: %.2f\n", (float)area_2 + pib_2);
    } else if (opcao == 2 && opcao2 == 4) {
        printf("Carta 1 (Brasil) - atributo área(%.2f) + número de pontos turísticos (%d): %.2f\n", area_1, n_pontos_turisticos_1, (float)area_1 + n_pontos_turisticos_1);
        printf("Carta 2 (Argentina) - atributo área(%.2f) + número de pontos turísticos (%d): %.2f\n", area_2, n_pontos_turisticos_2, (float)area_2 + n_pontos_turisticos_2);
        (float)area_1 + n_pontos_turisticos_1 > (float)area_2 + n_pontos_turisticos_2 ? printf("Brasil vence com a soma dos atributos: %.2f\n", (float)area_1 + n_pontos_turisticos_1) :
        printf("Argentina vence com a soma dos atributos: %.2f\n", (float)area_2 + n_pontos_turisticos_2);
    } else if (opcao == 2 && opcao2 == 5) {
        printf("Carta 1 (Brasil) - atributo área(%.2f) + densidade demográfica (%.2f): %.2f\n", area_1, densidade_demografica_1, (float)area_1 + densidade_demografica_1);
        printf("Carta 2 (Argentina) - atributo área(%.2f) + densidade demográfica (%.2f): %.2f\n", area_2, densidade_demografica_2, (float)area_2 + densidade_demografica_2);
        (float)area_1 + densidade_demografica_1 > (float)area_2 + densidade_demografica_2 ? printf("Brasil vence com a soma dos atributos: %.2f\n", (float)area_1 + densidade_demografica_1) :
        printf("Argentina vence com a soma dos atributos: %.2f\n", (float)area_2 + densidade_demografica_2);
    }
    if (opcao == 3 && opcao2 == 1) {
        printf("Carta 1 (Brasil) - atributo PIB(%.2f) + população (%d): %.2f\n", pib_1, populacao_1, (float)pib_1 + populacao_1);
        printf("Carta 2 (Argentina) - atributo PIB(%.2f) + população (%d): %.2f\n", pib_2, populacao_2, (float)pib_2 + populacao_2);
        (float)pib_1 + populacao_1 > (float)pib_2 + populacao_2 ? printf("Brasil vence com a soma dos atributos: %.2f\n", (float)pib_1 + populacao_1) :
        printf("Argentina vence com a soma dos atributos: %.2f\n", (float)pib_2 + populacao_2);
    } else if (opcao == 3 && opcao2 == 2) {
        printf("Carta 1 (Brasil) - atributo PIB(%.2f) + área (%.2f): %.2f\n", pib_1, area_1, (float)pib_1 + area_1);
        printf("Carta 2 (Argentina) - atributo PIB(%.2f) + área (%.2f): %.2f\n", pib_2, area_2, (float)pib_2 + area_2);
        (float)pib_1 + area_1 > (float)pib_2 + area_2 ? printf("Brasil vence com a soma dos atributos: %.2f\n", (float)pib_1 + area_1) :
        printf("Argentina vence com a soma dos atributos: %.2f\n", (float)pib_2 + area_2);
    } else if (opcao == 3 && opcao2 == 4) {
        printf("Carta 1 (Brasil) - atributo PIB(%.2f) + número de pontos turísticos (%d): %.2f\n", pib_1, n_pontos_turisticos_1, (float)pib_1 + n_pontos_turisticos_1);
        printf("Carta 2 (Argentina) - atributo PIB(%.2f) + número de pontos turísticos (%d): %.2f\n", pib_2, n_pontos_turisticos_2, (float)pib_2 + n_pontos_turisticos_2);
        (float)pib_1 + n_pontos_turisticos_1 > (float)pib_2 + n_pontos_turisticos_2 ? printf("Brasil vence com a soma dos atributos: %.2f\n", (float)pib_1 + n_pontos_turisticos_1) :
        printf("Argentina vence com a soma dos atributos: %.2f\n", (float)pib_2 + n_pontos_turisticos_2);
    } else if (opcao == 3 && opcao2 == 5) {
        printf("Carta 1 (Brasil) - atributo PIB(%.2f) + densidade demográfica (%.2f): %.2f\n", pib_1, densidade_demografica_1, (float)pib_1 + densidade_demografica_1);
        printf("Carta 2 (Argentina) - atributo PIB(%.2f) + densidade demográfica (%.2f): %.2f\n", pib_2, densidade_demografica_2, (float)pib_2 + densidade_demografica_2);
        (float)pib_1 + densidade_demografica_1 > (float)pib_2 + densidade_demografica_2 ? printf("Brasil vence com a soma dos atributos: %.2f\n", (float)pib_1 + densidade_demografica_1) :
        printf("Argentina vence com a soma dos atributos: %.2f\n", (float)pib_2 + densidade_demografica_2);
    }
    if (opcao == 4 && opcao2 == 1) {
        printf("Carta 1 (Brasil) - atributo número de pontos turísticos (%d) + população (%d): %.2f\n", n_pontos_turisticos_1, populacao_1, (float)n_pontos_turisticos_1 + populacao_1);
        printf("Carta 2 (Argentina) - atributo número de pontos turísticos (%d) + população (%d): %.2f\n", n_pontos_turisticos_2, populacao_2, (float)n_pontos_turisticos_2 + populacao_2);
        (float)n_pontos_turisticos_1 + populacao_1 > (float)n_pontos_turisticos_2 + populacao_2 ? printf("Brasil vence com a soma dos atributos: %.2f\n", (float)n_pontos_turisticos_1 + populacao_1) :
        printf("Argentina vence com a soma dos atributos: %.2f\n", (float)n_pontos_turisticos_2 + populacao_2);
    } else if (opcao == 4 && opcao2 == 2) {
        printf("Carta 1 (Brasil) - atributo número de pontos turísticos (%d) + área (%.2f): %.2f\n", n_pontos_turisticos_1, area_1, (float)n_pontos_turisticos_1 + area_1);
        printf("Carta 2 (Argentina) - atributo número de pontos turísticos (%d) + área (%.2f): %.2f\n", n_pontos_turisticos_2, area_2, (float)n_pontos_turisticos_2 + area_2);
        (float)n_pontos_turisticos_1 + area_1 > (float)n_pontos_turisticos_2 + area_2 ? printf("Brasil vence com a soma dos atributos: %.2f\n", (float)n_pontos_turisticos_1 + area_1) :
        printf("Argentina vence com a soma dos atributos: %.2f\n", (float)n_pontos_turisticos_2 + area_2);
    } else if (opcao == 4 && opcao2 == 3) {
        printf("Carta 1 (Brasil) - atributo número de pontos turísticos (%d) + PIB (%.2f): %.2f\n", n_pontos_turisticos_1, pib_1, (float)n_pontos_turisticos_1 + pib_1);
        printf("Carta 2 (Argentina) - atributo número de pontos turísticos (%d) + PIB (%.2f): %.2f\n", n_pontos_turisticos_2, pib_2, (float)n_pontos_turisticos_2 + pib_2);
        (float)n_pontos_turisticos_1 + pib_1 > (float)n_pontos_turisticos_2 + pib_2 ? printf("Brasil vence com a soma dos atributos: %.2f\n", (float)n_pontos_turisticos_1 + pib_1) :
        printf("Argentina vence com a soma dos atributos: %.2f\n", (float)n_pontos_turisticos_2 + pib_2);
    } else if (opcao == 4 && opcao2 == 5) {
        printf("Carta 1 (Brasil) - atributo número de pontos turísticos (%d) + densidade demográfica (%.2f): %.2f\n", n_pontos_turisticos_1, densidade_demografica_1, (float)n_pontos_turisticos_1 + densidade_demografica_1);
        printf("Carta 2 (Argentina) - atributo número de pontos turísticos (%d) + densidade demográfica (%.2f): %.2f\n", n_pontos_turisticos_2, densidade_demografica_2, (float)n_pontos_turisticos_2 + densidade_demografica_2);
        (float)n_pontos_turisticos_1 + densidade_demografica_1 > (float)n_pontos_turisticos_2 + densidade_demografica_2 ? printf("Brasil vence com a soma dos atributos: %.2f\n", (float)n_pontos_turisticos_1 + densidade_demografica_1) :
        printf("Argentina vence com a soma dos atributos: %.2f\n", (float)n_pontos_turisticos_2 + densidade_demografica_2);
    }
     if (opcao == 5 && opcao2 == 1) {
        printf("Carta 1 (Brasil) - atributo densidade demográfica (%.2f) + população (%d): %.2f\n", densidade_demografica_1, populacao_1, (float)densidade_demografica_1 + populacao_1);
        printf("Carta 2 (Argentina) - atributo densidade demográfica (%.2f) + população (%d): %.2f\n", densidade_demografica_2, populacao_2, (float)densidade_demografica_2 + populacao_2);
        (float)densidade_demografica_1 + populacao_1 > (float)densidade_demografica_2 + populacao_2 ? printf("Brasil vence com a soma dos atributos: %.2f\n", (float)densidade_demografica_1 + populacao_1) :
        printf("Argentina vence com a soma dos atributos: %.2f\n", (float)densidade_demografica_2 + populacao_2);
    } else if (opcao == 5 && opcao2 == 2) {
        printf("Carta 1 (Brasil) - atributo densidade demográfica (%.2f) + área (%.2f): %.2f\n", densidade_demografica_1, area_1, (float)densidade_demografica_1 + area_1);
        printf("Carta 2 (Argentina) - atributo densidade demográfica (%.2f) + área (%.2f): %.2f\n", densidade_demografica_2, area_2, (float)densidade_demografica_2 + area_2);
        (float)densidade_demografica_1 + area_1 > (float)densidade_demografica_2 + area_2 ? printf("Brasil vence com a soma dos atributos: %.2f\n", (float)densidade_demografica_1 + area_1) :
        printf("Argentina vence com a soma dos atributos: %.2f\n", (float)densidade_demografica_2 + area_2);
    } else if (opcao == 5 && opcao2 == 3) {
        printf("Carta 1 (Brasil) - atributo densidade demográfica (%.2f) + PIB (%.2f): %.2f\n", densidade_demografica_1, pib_1, (float)densidade_demografica_1 + pib_1);
        printf("Carta 2 (Argentina) - atributo densidade demográfica (%.2f) + PIB (%.2f): %.2f\n", densidade_demografica_2, pib_2, (float)densidade_demografica_2 + pib_2);
        (float)densidade_demografica_1 + pib_1 > (float)densidade_demografica_2 + pib_2 ? printf("Brasil vence com a soma dos atributos: %.2f\n", (float)densidade_demografica_1 + pib_1) :
        printf("Argentina vence com a soma dos atributos: %.2f\n", (float)densidade_demografica_2 + pib_2);
    } else if (opcao == 5 && opcao2 == 4) {
        printf("Carta 1 (Brasil) - atributo densidade demográfica (%.2f) + número de pontos turísticos (%d): %.2f\n", densidade_demografica_1, n_pontos_turisticos_1, (float)densidade_demografica_1 + n_pontos_turisticos_1);
        printf("Carta 2 (Argentina) - atributo densidade demográfica (%.2f) + número de pontos turísticos (%d): %.2f\n", densidade_demografica_2, n_pontos_turisticos_2, (float)densidade_demografica_2 + n_pontos_turisticos_2);
        (float)densidade_demografica_1 + n_pontos_turisticos_1 > (float)densidade_demografica_2 + n_pontos_turisticos_2 ? printf("Brasil vence com a soma dos atributos: %.2f\n", (float)densidade_demografica_1 + n_pontos_turisticos_1) :
        printf("Argentina vence com a soma dos atributos: %.2f\n", (float)densidade_demografica_2 + n_pontos_turisticos_2);
    }   // O codigo se torna bem extenso devido a todas as possibilidades de soma dos atributos escolhidos no menu
        // Cada menu tem 5 opcoes, e como sao escolhidas 2 opcoes diferentes, temos 5x4 = 20 possibilidades diferentes de soma de atributos
        // Portanto, foram criados 20 blocos de codigo if-else para cobrir todas as possibilidades

    return 0;

}
