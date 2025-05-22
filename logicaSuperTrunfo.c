#include <stdio.h>

int main() {
    //Variáveis
    char estado1, estado2;
    char codigo1[5], codigo2[5];
    char cidade1[50], cidade2[50];
    unsigned long int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontosTuristicos1, pontosTuristicos2;
    float DensiPop1, DensiPop2;
    float PibPerCap1, PibPerCap2;

    //Primeira carta
    printf("            Digite os dados da primeira carta:\n");

    printf("Estado (letra de A a H): ");
    scanf(" %c", &estado1);

    printf("Código da carta (ex: A01, B03): ");
    scanf("%s", &codigo1);

    printf("Nome da cidade: ");
    scanf("%s", &cidade1);

    printf("População: ");
    scanf("%d", &populacao1);

    printf("Área (em km²): ");
    scanf("%f", &area1);

    printf("PIB: ");
    scanf("%f", &pib1);

    printf("Pontos turísticos: ");
    scanf("%d", &pontosTuristicos1);

    //Segunda carta
    printf("\n          Digite os dados da segunda carta:\n");

    printf("Estado (letra de A a H): ");
    scanf(" %c", &estado2);

    printf("Código da carta (ex: A01, B03): ");
    scanf("%s", &codigo2);

    printf("Nome da cidade: ");
    scanf("%s", &cidade2);

    printf("População: ");
    scanf("%d", &populacao2);

    printf("Área (em km²): ");
    scanf("%f", &area2);

    printf("PIB: ");
    scanf("%f", &pib2);

    printf("Pontos turísticos: ");
    scanf("%d", &pontosTuristicos2);

    //Cálculo de Densidade Populacional
    DensiPop1 = populacao1 / area1;
    DensiPop2 = populacao2 / area2;

    PibPerCap1 = pib1 / populacao1;
    PibPerCap2 = pib2 / populacao2;
    
    //Dados da primeira carta
    printf("\n          Dados da Primeira Carta\n");
    printf("Estado: %c\n", estado1);
    printf("Código da Carta: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2fkm²\n", area1);
    printf("PIB: R$%.2f\n", pib1);
    printf("Pontos Turísticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2fhab/km²\n", DensiPop1);
    printf("PIB per Capita: %.2fR$\n", PibPerCap1);

    //Dados da segunda carta
    printf("\n\n          Dados da Segunda Carta\n");
    printf("Estado: %c\n", estado2);
    printf("Código da Carta: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2fkm²\n", area2);
    printf("PIB: R$%.2f\n", pib2);
    printf("Pontos Turísticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2fhab/km²\n", DensiPop2);
    printf("PIB per Capita: %.2fR$\n", PibPerCap2);

    // Comparação dos dados
    printf("\n\n        Comparação dos Atributos:\n");

    if (populacao1 > populacao2) {
        printf("Cidade 1 tem maior população.\n");
    } else if (populacao2 > populacao1) {
        printf("Cidade 2 tem maior população.\n");
    } else {
        printf("As duas cidades têm a mesma população.\n");
    }

    if (area1 > area2) {
        printf("Cidade 1 tem maior área.\n");
    } else if (area2 > area1) {
        printf("Cidade 2 tem maior área.\n");
    } else {
        printf("As duas cidades têm a mesma área.\n");
    }

    if (pib1 > pib2) {
        printf("Cidade 1 tem maior PIB.\n");
    } else if (pib2 > pib1) {
        printf("Cidade 2 tem maior PIB.\n");
    } else {
        printf("As duas cidades têm o mesmo PIB.\n");
    }
    if (pontosTuristicos1 > pontosTuristicos2) {
        printf("Cidade 1 tem mais pontos turísticos.\n");
    } else if (pontosTuristicos2 > pontosTuristicos1) {
        printf("Cidade 2 tem mais pontos turísticos.\n");
    } else {
        printf("As duas cidades têm a mesma quantidade de pontos turísticos.\n");
    }
    if (DensiPop1 < DensiPop2) {
        printf("Cidade 1 tem menor densidade populacional.\n");
    } else if (DensiPop2 > DensiPop1) {
        printf("Cidade 2 tem menor densidade populacional.\n");
    } else {
        printf("As duas cidades têm a mesma densidade populacional.\n");
    }

    // PIB per Capita
    if (PibPerCap1 > PibPerCap2) {
        printf("Cidade 1 tem maior PIB per capita.\n");
    } else if (PibPerCap2 > PibPerCap1) {
        printf("Cidade 2 tem maior PIB per capita.\n");
    } else {
        printf("As duas cidades têm o mesmo PIB per capita.\n");
    }

    return 0;
}
