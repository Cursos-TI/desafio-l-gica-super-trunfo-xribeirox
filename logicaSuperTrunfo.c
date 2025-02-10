#include <stdio.h>

int main() {
    // VARIAVEIS CIDADES
    char cidade1[50], cidade2[50];
    int populacao1, populacao2;
    int pontosturisticos1, pontosturisticos2;
    float area1, area2;
    float pib1, pib2;
    float densidadepopulacao1, densidadepopulacao2;
    float pibpercapita1, pibpercapita2;

    // SCANF CIDADE 1
    printf("Informe o nome da primeira cidade:\n");
    scanf("%s", cidade1);

    printf("Informe a população da primeira cidade:\n");
    scanf("%d", &populacao1);

    printf("Informe a área em km2 da primeira cidade:\n");
    scanf("%f", &area1);

    printf("Informe o PIB da primeira cidade:\n");
    scanf("%f", &pib1);

    printf("Informe o número de pontos turísticos da primeira cidade:\n");
    scanf("%d", &pontosturisticos1);

    // SCANF CIADE 2
    printf("\nInforme o nome da segunda cidade:\n");
    scanf("%s", cidade2);

    printf("Informe a população da segunda cidade:\n");
    scanf("%d", &populacao2);

    printf("Informe a área (em km2 da segunda cidade:\n");
    scanf("%f", &area2);

    printf("Informe o PIB da segunda cidade:\n");
    scanf("%f", &pib2);

    printf("Informe o número de pontos turísticos da segunda cidade:\n");
    scanf("%d", &pontosturisticos2);

    // CALCULO DENSIDADE E PIB 1
    densidadepopulacao1 = populacao1 / area1;
    pibpercapita1 = pib1 / populacao1;

    // CALCULO DENSIDADE E PIB 2
    densidadepopulacao2 = populacao2 / area2;
    pibpercapita2 = pib2 / populacao2;

    // COMPARAÇAO DENSIDADE ONDE MENOIR VENCE
    printf("\nDensidade Populacional: ");
    if (densidadepopulacao1 < densidadepopulacao2) {
    printf("Cidade %s venceu! Densidade Populacional = %.2f\n", cidade1, densidadepopulacao1);
    } else {
    printf("Cidade %s venceu! Densidade Populacional = %.2f\n", cidade2, densidadepopulacao2);
    }

    // COMPARA PIB - MAIOR VENCE
    printf("PIB: ");
    if (pib1 > pib2) {
    printf("Cidade %s venceu! PIB = R$%.2f\n", cidade1, pib1);
    } else {
    printf("Cidade %s venceu! PIB = R$%.2f\n", cidade2, pib2);
    }

    // COMPARA PONTOS - MAIS VENCE
    printf("Pontos Turísticos: ");
    if (pontosturisticos1 > pontosturisticos2) {
    printf("Cidade %s venceu! Pontos Turísticos = %d\n", cidade1, pontosturisticos1);
    } else {
    printf("Cidade %s venceu! Pontos Turísticos = %d\n", cidade2, pontosturisticos2);
    }

    // PIB - MAIOR VENCE
    printf("PIB per Capita: ");
    if (pibpercapita1 > pibpercapita2) {
    printf("Cidade %s venceu! PIB per Capita = R$%.2f\n", cidade1, pibpercapita1);
    } else {
    printf("Cidade %s venceu! PIB per Capita = R$%.2f\n", cidade2, pibpercapita2);
    }

    return 0;
}

