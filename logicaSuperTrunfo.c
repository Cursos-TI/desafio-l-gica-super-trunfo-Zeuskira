#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das cartas
// Nivel aventureiro
// Como o desafio pede empate, foi adicionado entrada de dados para as cartas


int main() {

    // Área para definição das variáveis do primeiro país/carta

    char pais_1[30];
    int populacao_1;
    float area_1;
    float pib_1;
    int n_pontos_turisticos_1;
    float densidade_demografica_1;
    

    // Área para definição das variáveis do segundo país/carta

    char pais_2[30];
    int populacao_2;
    float area_2;
    float pib_2;
    int n_pontos_turisticos_2;
    float densidade_demografica_2;
    
    // Entrada de dados do país 1

    printf("Digite o nome do páis da carta 1: ");
    scanf("%s", pais_1);
    printf("Digite a população do páis da carta 1: ");
    scanf("%d", &populacao_1);
    printf("Digite a área do páis da carta 1: ");
    scanf("%f", &area_1);
    printf("Digite o PIB do páis da carta 1: ");
    scanf("%f", &pib_1);
    printf("Digite o número de pontos turísticos do páis da carta 1: ");
    scanf("%d", &n_pontos_turisticos_1);

    // Entrada de dados do país 2

    printf("\nDigite o nome do páis da carta 2: ");
    scanf("%s", pais_2);
    printf("Digite a população do páis da carta 2: ");
    scanf("%d", &populacao_2);
    printf("Digite a área do páis da carta 2: ");
    scanf("%f", &area_2);
    printf("Digite o PIB do páis da carta 2: ");
    scanf("%f", &pib_2);
    printf("Digite o número de pontos turísticos do páis da carta 2: ");
    scanf("%d", &n_pontos_turisticos_2);

    // Criação do menu de comparação
    
    int opcao;
    printf("\n***Menu de comparação das cartas***\n");
    printf("Escolha um atributo para comparar:\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Número de Pontos Turísticos\n");
    printf("5. Densidade Demográfica\n");
    printf("Opção: ");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1:
            printf("\nAtributo escolhido: População.\n");
            printf("Carta 1 - Brasil: %d habitantes\n", populacao_1);
            printf("Carta 2 - Argentina: %d habitantes\n", populacao_2);
            if (populacao_1 > populacao_2) {
                printf("Brasil vence com uma população de %d, maior que Argentina.\n", populacao_1);
            } else if (populacao_1 < populacao_2) {
                printf("Argentina vence com uma população de %d, maior que a do Brasil.\n", populacao_2);
            } else {
                printf("Empate! Ambos os países têm a mesma população de %d habitantes.\n", populacao_1);
            }
            break;
        case 2:
            printf("\nAtributo escolhido: Área.\n");
            printf("Carta 1 - Brasil: %.2f km²\n", area_1);
            printf("Carta 2 - Argentina: %.2f km²\n", area_2);
            if (area_1 > area_2) {
                printf("Brasil vence com uma área de %.2f km², maior que Argentina.\n", area_1);
            } else if (area_1 < area_2) {
                printf("Argentina vence com uma área de %.2f km², maior que a do Brasil.\n", area_2);
            } else {
                printf("Empate! Ambos os países têm a mesma área de %.2f km².\n", area_1);
            }
            break;
        case 3:
            printf("\nAtributo escolhido: PIB.\n");
            printf("Carta 1 - Brasil: %.2f bilhões de dólares\n", pib_1);
            printf("Carta 2 - Argentina: %.2f bilhões de dólares\n", pib_2);
            if (pib_1 > pib_2) {
                printf("Brasil vence com um PIB de %.2f bilhões, maior que Argentina.\n", pib_1);
            } else if (pib_1 < pib_2) {
                printf("Argentina vence com um PIB de %.2f bilhões, maior que o do Brasil.\n", pib_2);
            } else {
                printf("Empate! Ambos os países têm o mesmo PIB de %.2f bilhões.\n", pib_1);
            }
            break;
        case 4:
            printf("\nAtributo escolhido: Número de Pontos Turísticos.\n");
            printf("Carta 1 - Brasil: %d pontos turísticos\n", n_pontos_turisticos_1);
            printf("Carta 2 - Argentina: %d pontos turísticos\n", n_pontos_turisticos_2);
            if (n_pontos_turisticos_1 > n_pontos_turisticos_2) {
                printf("Brasil vence com %d pontos turísticos, maior que a Argentina\n", n_pontos_turisticos_1);
            } else if (n_pontos_turisticos_1 < n_pontos_turisticos_2) {
                printf("Argentina vence com %d pontos turísticos, maior que o Brasil\n", n_pontos_turisticos_2);
            } else {
                printf("Empate! Ambos os países têm o mesmo número de pontos turísticos: %d.\n", n_pontos_turisticos_1);
            }
            break;
        case 5:
            printf("\nAtributo escolhido: Densidade Demográfica.\n");
            printf("Carta 1 - Brasil: %.2f habitantes/km²\n", densidade_demografica_1= (float)populacao_1 / area_1);
            printf("Carta 2 - Argentina: %.2f habitantes/km²\n", densidade_demografica_2= (float)populacao_2 / area_2);
            if (densidade_demografica_1 < densidade_demografica_2) {
                printf("Brasil vence com uma densidade demográfica de %.2f habitantes/km², menor que a da Argentina.\n", densidade_demografica_1);
            } else if (densidade_demografica_1 > densidade_demografica_2) {
                printf("Argentina vence com uma densidade demográfica de %.2f habitantes/km², menor que a do Brasil.\n", densidade_demografica_2);
            } else {
                printf("Empate! Ambos os países têm a mesma densidade demográfica de %.2f habitantes/km².\n", densidade_demografica_1);
            }
            break;
        default:
            printf("Opção inválida. Por favor, escolha uma opção de atributo válida.\n");
    }

return 0;
} 