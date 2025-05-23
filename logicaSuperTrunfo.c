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
    scanf(" %[^\n]", cidade1);

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
    scanf(" %[^\n]", cidade2);

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
    printf("\n          Dados da Segunda Carta\n");
    printf("Estado: %c\n", estado2);
    printf("Código da Carta: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2fkm²\n", area2);
    printf("PIB: R$%.2f\n", pib2);
    printf("Pontos Turísticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2fhab/km²\n", DensiPop2);
    printf("PIB per Capita: %.2fR$\n", PibPerCap2);

    //Menu de comparação
    int menu;

    do{
    printf("\nEscolha o atributo para comparar:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Demográfica\n");
    printf("0 - Sair\n");
    printf("Selecione: ");
    scanf("%d", &menu);

    switch (menu) {
        case 1:
            printf("\nPopulação de %s: %d\n", cidade1, populacao1);
            printf("População de %s: %d\n", cidade2, populacao2);
            if (populacao1 > populacao2)
                printf("Vencedor: %s\n", cidade1);  
            else if (populacao2 > populacao1)
                printf("Vencedor: %s\n", cidade2);
            else
                printf("Empate\n");
            break;
        case 2:
            printf("\nÁrea de %s: %.2f km²\n", cidade1, area1);
            printf("Área de %s: %.2f km²\n", cidade2, area2);
            if (area1 > area2)
                printf("Vencedor: %s\n", cidade1);
            else if (area2 > area1)
                printf("Vencedor: %s\n", cidade2);
            else
                printf("Empate\n");
            break;
        case 3:
            printf("\nPIB de %s: R$%.2f\n", cidade1, pib1);
            printf("PIB de %s: R$%.2f\n", cidade2, pib2);
            if (pib1 > pib2)
                printf("Vencedor: %s\n", cidade1);
            else if (pib2 > pib1)
                printf("Vencedor: %s\n", cidade2);
            else
                printf("Empate\n");
            break;
        case 4:
            printf("\nPontos Turísticos de %s: %d\n", cidade1, pontosTuristicos1);
            printf("Pontos Turísticos de %s: %d\n", cidade2, pontosTuristicos2);
            if (pontosTuristicos1 > pontosTuristicos2)
                printf("Vencedor: %s\n", cidade1);
            else if (pontosTuristicos2 > pontosTuristicos1)
                printf("Vencedor: %s\n", cidade2);
            else
                printf("Empate\n");
            break;
        case 5:
            printf("\nDensidade Demográfica de %s: %.2f hab/km²\n", cidade1, DensiPop1);
            printf("Densidade Demográfica de %s: %.2f hab/km²\n", cidade2, DensiPop2);
            if (DensiPop1 < DensiPop2)
                printf("Vencedor: %s\n", cidade1);
            else if (DensiPop2 < DensiPop1)
                printf("Vencedor: %s\n", cidade2);
            else
                printf("Empate\n");
            break;
        case 0:
            printf("Saindo do menu de comparação.\n");
            break;
        default:
            printf("Opção inválida, tente denovo\n");
    }
} while (menu != 0);

    return 0;
}