#include <stdio.h>

int main() {
    char estado;
    char codigo[20];
    char nome[20];
    int populacao;
    float area;
    float produto;
    int pontos;

    char estado2;
    char codigo2[20];
    char nome2[20];
    int populacao2;
    float area2;
    float produto2;
    int pontos2;

    printf("Insira os dados de duas cartas\n");

    printf("\nCarta 1\n");
    printf("Inicial do estado: ");
    scanf(" %c", &estado);

    printf("Codigo da carta: ");
    scanf("%s", codigo);
    
    printf("Nome da cidade: ");
    scanf("%s", nome);

    printf("Número de habitantes da cidade: ");
    scanf("%d", &populacao);

    printf("Área da cidade em quilômetros quadrados: ");
    scanf("%f", &area);

    printf("Produto Interno Bruto da cidade: ");
    scanf("%f", &produto);
    
    printf("Quantidade de pontos turísticos: ");
    scanf("%d", &pontos);

    printf("\nCarta 2\n");
    printf("Inicial do estado: ");
    scanf(" %c", &estado2);

    printf("Codigo da carta: ");
    scanf("%s", codigo2);
    
    printf("Nome da cidade: ");
    scanf("%s", nome2);

    printf("Número de habitantes da cidade: ");
    scanf("%d", &populacao2);

    printf("Área da cidade em quilômetros quadrados: ");
    scanf("%f", &area2);

    printf("Produto Interno Bruto da cidade: ");
    scanf("%f", &produto2);
    
    printf("Quantidade de pontos turísticos: ");
    scanf("%d", &pontos2);

    printf("\n====================\n");
    printf("       CARTA 1\n");
    printf("====================\n");
    printf("Sua inicial do estado é: %c\n", estado);
    printf("Seu codigo da carta é: %s\n", codigo);
    printf("O nome da cidade é: %s\n", nome);
    printf("O número de habitantes da cidade é: %d\n", populacao);
    printf("A área da cidade é: %.2f km²\n", area);
    printf("O PIB da cidade é: %.2f\n", produto);
    printf("A cidade possui %d pontos turísticos.\n", pontos);

    printf("\n====================\n");
    printf("       CARTA 2\n");
    printf("====================\n");
    printf("Sua inicial do estado é: %c\n", estado2);
    printf("Seu codigo da carta é: %s\n", codigo2);
    printf("O nome da cidade é: %s\n", nome2);
    printf("O número de habitantes da cidade é: %d\n", populacao2);
    printf("A área da cidade é: %.2f km²\n", area2);
    printf("O PIB da cidade é: %.2f\n", produto2);
    printf("A cidade possui %d pontos turísticos.\n", pontos2);

    return 0;
}
